#include<iostream>
using std::cout; using std::cin; using std::endl; using std::boolalpha;
#include<string>
#include<vector>
using std::vector;


void print_vector(vector<int> data)
{
    for ( int i = 0; i < data.size(); i++)
    {
      cout << data[i] << endl;
    }


}

int main (){

    vector<int> numbers;


    for (int i = 0; i < 10; i++)
    {
      //add elemnts to vector (1,10)
      numbers.push_back(i);
    }

    cout << "Vector Size: " << numbers.size() << endl;
    // random values in numbers vector

    // last element in a vector
    cout << numbers[numbers.size()-1] << endl;

    numbers.pop_back(); // remove last item in the Vector (Which is 9)

    print_vector(numbers);

}
