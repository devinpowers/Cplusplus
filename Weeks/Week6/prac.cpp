

#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;
#include<stdexcept>
using std::out_of_range; using std::invalid_argument;
using std::runtime_error;
 
int main()
{
string my_str = "103456";
  size_t indx = 1;
  long char_long;
  char C;

  try {
    C = my_str.at(indx);                  

    char_long = stol(string(1,C));         // throws invalid_argument
     
   if (char_long == 0)

      throw runtime_error("Error");
    
    cout << "My String Size / Char Long: ";
    cout << my_str.size() / char_long << endl;

  } 
   catch (invalid_argument& e) {
    cout << "in the invalid_arg catcher" << endl;
    cout << e.what() << endl;
  }

  catch (runtime_error& e){

     cout << "Run time error!!" << endl;
     
  }


}



