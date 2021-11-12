
#include "stack.h"


int main(){

  // Create  a new stack to use

  Stack<int> stack1;

  // Pushing Values onto our Stack
  for (int i = 0; i < 10; i++ ){
    stack1.push(i);
  }

  // Testing Size Method

  std::cout << "Size of the Stack: " << stack1.size() << std::endl;

  std::cout << "Peek Top of the Stack: " << stack1.pop() << std::endl;

  // Pop Value off Value
  std::cout << "Pop off Stack " << stack1.pop() << std::endl;

  // Push more onto the Stack 
  stack1.push(24);
  stack1.push(20);

  std::cout << "Size of the Stack: " << stack1.size() << std::endl;

  while (!stack1.isEmpty()){
    auto v = stack1.pop();
    std::cout <<"Popped Value: " << v << std::endl;
  }





}