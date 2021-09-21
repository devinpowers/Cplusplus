#include<iostream>
using std::cout; using std::endl; using std::cin;
#include<string>
using std::string;
#include<stdexcept>
using std::underflow_error;

#include "19.1-stack.h"

// calls copy constructor to pass the Stack,
// then exercise the copy

void function1(Stack s){
  // is the copy good?
  cout << "function1 copied stack:" << s << endl;
  while (!s.empty()) 
  {   // print out stack
      s.pop();
  }                         
  // Push values (Char) onto the stack
  for(int i=0; i<10; i++)
    s.push(static_cast<char>('y'-i) ); // add Char into the Stack starting from y

  cout << "updated function1 stack:"<< s<< endl;
}

int main (){
  // exercise things a bit
  Stack stk = {'a', 'b', 'c'};
  cout << stk << endl;
  cout << "Top:" << stk.top() << endl;
  stk.pop();
  stk.push('z');
  cout << stk << endl;

  while (! stk.empty() )
    stk.pop();
  
  try{
    stk.pop();
  }
  catch (const underflow_error &e){
    cout << e.what() << ": continuing after error"<<endl;
  }
  
  try{
    stk.top();
  }
  catch (const underflow_error &e){
    cout << e.what() << ": continuing after error"<<endl;
  } 
  
  stk.clear();
  cout << stk << endl;

  // reverse a string
  string user_string="", reverse_string="";
  
  cout << "Give me a string to reverse:";
  getline(cin, user_string);
  Stack rev_stk;
  
  for (auto ch : user_string){
    rev_stk.push(ch);
  }

 
  cout <<"rev_stk, Pre function1:"<<rev_stk<<endl;

   // NEW STUFF IS HERE
  cout << "---------------------------- " << endl;
  cout << "FUNCTION 1: " << endl;
  
  function1(rev_stk); // calls the copy constructor (is the original stack changed?)


  cout << "rev_stk, post function1 ";
  cout << rev_stk << endl; // Stack stays the same
  
   // assign call, a copy, then exercise copy
  Stack stk2 = rev_stk;
  stk2.pop();
  stk2.pop();
  stk2.push('7');
  stk2.push('8');
  cout << "op= stk2 :";
  cout << stk2 <<endl;
  
  // is the original stack changed? (since we pushed values 7 and 8 onto the stack)
  cout << "rev_stk post op=";
  cout << rev_stk << endl;
  // NOPE it has not changed
  
  // REVERSE STRING
  while (!rev_stk.empty()){

   reverse_string = reverse_string + rev_stk.top();
   rev_stk.pop();
  }
  
  cout<<"Original String was:"<<user_string<<endl;
  cout<<"Reversed String was:"<<reverse_string<<endl;

  cout << "LETS VIEW ALL THE STACKS HERE: " << endl;

  cout << "STACK1: " << stk << endl;
  cout << "STACK2: " << stk2 << endl;
  cout << "STACK3: " << rev_stk << endl;
}

