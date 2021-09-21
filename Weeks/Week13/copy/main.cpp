
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;


class Animal {

  private:
      string name;
  public:
      Animal() {
        cout << "Animal Created " << endl;
      }
      Animal(const Animal& other)
      {
        // Our own copy constructor
        //Copy fields of other animal (other)
        cout << "Aniaml Created by copying " << endl;

        name = other.name;

      }

      void setName(string name ) {this->name = name; };
      void speak() const 
      {
        cout << "My name is: " << name << endl;
      }
};

int main()
{

  Animal animal1;

  animal1.setName("Freddy");

  Animal animal2 = animal1;
    animal2.speak();


  animal2.setName("Bob");

  animal1.speak();
  animal2.speak();

}