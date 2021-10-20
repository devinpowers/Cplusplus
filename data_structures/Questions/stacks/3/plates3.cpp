#include <cstddef>
#include <cassert>
#include <vector>
#include <stack>

class SetOfStacks
{
	public:
		SetOfStacks()
		{
			capacity = 10;
			stack_vec = std::vector<std::stack<int>>();
		};

		SetOfStacks(size_t cap)
		{
			capacity = cap;
			stack_vec = std::vector<std::stack<int>>();
		};

		void popAt(size_t index)
		{
			assert(index < stack_vec.size() && stack_vec[index].size() > 0);
			if (stack_vec[index].size() > 1)
			{
				stack_vec[index].pop();
			}
			else
			{
				if (stack_vec.size() > 1)
					stack_vec.erase(stack_vec.begin() + index);
				else // we only have one stack
					stack_vec[index].pop();
			}
		};

		bool pop()
		{
			if (stack_vec.size() == 1 && stack_vec[0].empty())
				return false;

			stack_vec.back().pop();

			if (stack_vec.back().empty() && stack_vec.size() > 1)
				stack_vec.pop_back();
			
			return true;
		};

		void push(const int& i)
		{
			if (stack_vec.back().size() == capacity)
				stack_vec.push_back(std::stack<int>());
			stack_vec.back().push(i);
		};

		size_t size() const
		{
			size_t initial = 0;
			for (const std::stack<int>& s : stack_vec)
				initial += s.size();
			return initial;
		};

		bool empty() const
		{
			return size() == 0;
		};

		int top() const
		{
			assert(!empty());
			return stack_vec.back().top();
		};

	private:
		std::vector<std::stack<int>> stack_vec;
		size_t capacity;
};

int main()
{
	// Testing this solution
    SetOfStacks stack;

    for (int i = 0; i < 4; i++ ){
        stack.push(i);
    }


}
