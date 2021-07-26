#include <iostream>
#include <string>
#include <type_traits>
#include <memory>


namespace helper
{
    // these expressions will be evaluated at compile time
    template <typename T>
    constexpr typename std::enable_if<!std::is_convertible<T, std::string>::value, std::string>::type
    to_string(const T &val) // cannot be converted directly thus we have to use type traits to determine if we can use to_string
    {
        return std::to_string(val);
    };

    template <typename T>
    constexpr typename std::enable_if<std::is_convertible<T, std::string>::value, std::string>::type
    to_string(const T &val) // converts to string directly
    {
        return val;
    };
}

// We will build a linked list class that will contain the node info inside it
template <typename Data>
class LinkedList
{
private:
    struct Node
    {
        using node_ptr = std::unique_ptr<Node>;
        // the node holds only the data we want to store
        // and the link to the next node in the list
        Data data{}; // we will assume that data will have a basic type and can be deep copied
        node_ptr next = nullptr;

        operator std::string() const
        {
            return helper::to_string(this->data);
        }
    };
    using node_ptr = std::unique_ptr<Node>;
    // we always need to know where the link starts, thus we need a head node
    node_ptr head = nullptr;
    // we also need to keep track of how many numbers are in the list
    std::size_t size = 0;

public:

    LinkedList() = default; // just creating an empty list

    // using an initializer list constructor
    LinkedList(std::initializer_list<Data> listOfItems) noexcept
    {
        if (listOfItems.size() != 0)
        {
            auto it = listOfItems.begin();
            head = std::make_unique<Node>(*it);
            size++; // added first item
            Node* current = head.get();
            ++it;
            for (; it != listOfItems.end(); ++it)
            {
                current->next = std::make_unique<Node>(*it);
                current = current->next.get();
                size++;
            }
        }
    };
    // copy constructor
    LinkedList(const LinkedList& other) noexcept
    {
        // the copy constructor will have to go though all the nodes in other and make a copy of them into our list
        // for that we need to be able to add the new nodes in to this list, basically we need to copy the data and recreate the links
        std::cout << "*** Copy constructor ***" << '\n';
        if (other.head == nullptr) return;

        head = std::make_unique<Node>(other.head->data); // we need to know who head is - thus it needs to be initialized separately 
        Node* current = head.get();
        size = 1;

        Node* otherCurrent = other.head->next.get();
        while (otherCurrent != nullptr)
        {
            current->next = std::make_unique<Node>(otherCurrent->data);
            otherCurrent = otherCurrent->next.get();
            current = current->next.get();
            size++;
        }

    }
    // copy assignment operator
    LinkedList& operator=(const LinkedList& other) noexcept
    {
        std::cout << "*** Copy assignment operator ***" << '\n';
        LinkedList tempList(other);
        head.swap(tempList.head);
        std::swap(size, tempList.size);
        return *this;
    }
    // move constructor
    LinkedList(LinkedList&& other) noexcept
    {
        std::cout << "*** Move constructor ***" << '\n';
        head.swap(other.head);
        size = other.size;

        other.head = nullptr;
        other.size = 0;
    }
    // move assignment operator
    LinkedList& operator=(LinkedList&& other) noexcept
    {
        std::cout << "*** Move assignment operator ***" << '\n';
        this->clear();

        head.swap(other.head);
        size = other.size;

        other.head = nullptr;
        other.size = 0;

        return *this;
    }
    // nodes are managing their own memory using unique_ptr
    ~LinkedList() noexcept {};

    void clear() noexcept
    {
        if (!isEmpty())
        {
            Node* current = head.get();
            while (current != nullptr)
            {
                Node* temp = current;
                temp = nullptr;
                current = current->next.get();
            }
            head = nullptr;
            size = 0;
        }
    }
    
    // A very usefull think is to reverse the list
    void reverse() noexcept
    {
        // to reverse the list we simply have to switch the nodes until the head becomes the tail
        node_ptr current;
        current = std::move(head);
        node_ptr next = nullptr;
        node_ptr temp = nullptr;

        while (current != nullptr)
        {
            next = std::move(current->next);
            current->next = std::move(temp);
            temp = std::move(current);
            current = std::move(next);
        }
        head = std::move(temp);
    }
    std::size_t l_size() const noexcept { return size; };
    bool isEmpty() const { return l_size() == 0; };
    // adding a node at the end - O(n) - to be avoided
    void push_back(const Data& data) noexcept
    {
        // if the list is empty we're going to add head
        if (isEmpty())
        {
            head = std::make_unique<Node>(data, nullptr);
        }
        else
        {
            Node* current = head.get();
            while (current->next != nullptr)
            {
                current = current->next.get();
            }
            current->next = std::make_unique<Node>(data, nullptr);
        }
        size++;
    }
    // adding a node at the front - O(1)
    void push_front(const Data& data) 
    {
        // if the list is empty we're going to add head
        if (isEmpty())
        {
            head = std::make_unique<Node>(data, nullptr);
        }
        else
        {
            node_ptr newNode = std::make_unique<Node>(data, nullptr);
            newNode->next = std::move(head);
            head = std::move(newNode);
        }
        size++;
    };
    
    // we need to be able to traverse the list so we need to implement an iterator
    // returning a const pointer to the front
    struct Iterator {
        friend class LinkedList;
        // constructor that takes in a pointer from the linked list
        Iterator() noexcept : current_node(nullptr) {};
        Iterator(const node_ptr& node) noexcept : current_node(node.get()) {};
        
        // incremeneting means going through the list
        Iterator& operator++() noexcept
        {
            if (current_node != nullptr)
            {
                previous_node = current_node;
                current_node = current_node->next.get();
            }
            return *this;
        };

        // post fixing is bad in general but is has it's usages
        Iterator operator++(int) noexcept
        {
            Iterator tempIter = *this; // we make a copy of the iterator
            ++*this; // we increment
            return tempIter; // we return the copy before increment
        };

        // we need to be able to compare nodes
        bool operator!=(const Iterator& other) const noexcept
        {
            return this->current_node !=  other.current_node;
        };

        // return the data from the node (dereference operator)
        Data operator*() const noexcept
        {
            return this->current_node->data;
        };

        private:
            Node* previous_node = nullptr;
            Node* current_node = nullptr;
    };
    // insert value at position
    Iterator insert(const Iterator& pos, const Data& value)
    {
        if (pos.current_node != nullptr)
        {
            node_ptr newNode = std::make_unique<Node>(value);
            newNode->next = std::move(pos.current_node->next);
            if (pos.previous_node == nullptr)
            {
                head = std::move(newNode);
                size++;
                return Iterator(head);
            }
            else
            {
                pos.previous_node->next = std::move(newNode);
                size++;
                return Iterator(pos.previous_node->next);
            }
        }
        return pos;
    };

    // returning a const pointer to the front
    Iterator begin() const noexcept
    {
        return Iterator(this->head);
    };

    // returning a const pointer to the back - the back is always null because it marks the end of the list
    Iterator end() const noexcept
    {
        return Iterator();
    };

    void printList() const
    {
        if (isEmpty())
        {
            std::cout << "Empty list" << '\n';
        }
        else
        {
            Node* current = head.get();
            while (current != nullptr)
            {
                std::cout << std::string(*current) << '\n';
                current = current->next.get();
            }        
        }
    }
};

int main()
{
    LinkedList<unsigned long long> ulist = {12, 3123, 4324532, 4324231313, 54654645, 654768768, 4333423545, 12123423};
    for (const auto &item : ulist)
    {
        std::cout << item << '\n';
    }
    auto itr = ulist.begin();
    for (; itr != ulist.end(); ++itr)
    {
        if (*itr == 4324532ull)
        {
            itr = ulist.insert(itr, 11111);
            ++itr;
        }
    }
}