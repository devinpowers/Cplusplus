
/*
        Stack contains vector of stacks from our stack header file


*/

#include <iostream>
#include "stack.h"
using std::vector;
#include<vector>

class SetofStacks{

    private:
        vector<Stack<int>> stack_vec; // Vector of "stacks"
        size_t capacity  = 10;      // Capacity of each stack

    public:

        /*
        SetOfStacks()  // Constructor
		{
			capacity = 10;
			stack_vec = vector<Stack<int>>(); // vector of "Stacks"
		};

		SetOfStacks(size_t cap)   // Constructor if you pass a size into!
		{
			capacity = cap;
			stack_vec = vector<Stack<int>>();
		};
        */
        template <typename U>
        void push(const U&& i)
		{
			if (stack_vec.back().size() == capacity) // If at capacity, push onto the "next " stack in the vector
            {
                stack_vec.push_back(Stack<int>());
            }
			stack_vec.back().push(i); // else push onto stack

		};

        bool pop()
		{
			if (stack_vec.size() == 1 && stack_vec[0].empty())
            {
                return false;
            }

			stack_vec.back().pop();

			if (stack_vec.back().empty() && stack_vec.size() > 1)
            {
                stack_vec.pop_back();
            }
					
			return true;
		};

	

		size_t size() const
		{
			size_t initial = 0;
			for (const Stack<int>& s : stack_vec)
            {
                initial += s.size();
            }
				
			return initial;
		};

        bool empty( const{
            return size()  0;
        })

        int top() const {
            assert(!empty());
            return stack_vec.back().top();
        }




}