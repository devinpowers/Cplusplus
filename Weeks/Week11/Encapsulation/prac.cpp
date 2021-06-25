
#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s)  { salary = s;}
    // Getter (grabs the attribute)
    int getSalary() const { return salary; }
};

int main() {
  Employee myObj; // object

  myObj.setSalary(69); // call setter method thats availbe for the user to access

  cout << myObj.getSalary() << endl;

  // watch what we can't do

  Employee myObj2;

  return 0;
}