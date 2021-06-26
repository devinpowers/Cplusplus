#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;  // address to the next nod in the linked list
};

class linked_list
{
private:
    node *head;
    node *tail;

public:
    linked_list()
    {
        head = NULL; // Empty at first
        tail = NULL; // Empty at first
    }

    void add_node(int n)
    {
        // add node to the linked list

        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    void display()
    {
        // print the linked list

        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(4);
    a.add_node(5);
    a.add_node(6);
    a.add_node(3);

    a.add_node(72);
    a.add_node(69);
    a.display();
    return 0;
}