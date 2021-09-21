
#include<iostream>
using std::cout; using std::endl;
#include <vector>
using std::vector;


int main(){

    vector <int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    vector <int> v2 = { 10, 20, 30, 40, 50, 60, 70, 80};

    vector <int>:: iterator ptr = v.begin();

    advance(ptr, 4);

    //Lets copy 1 vector elements in other using the inserter() aftr the 4th position in our Vector v
    // little intro to algorithms!!! (more on that soon)
    copy(v2.begin(), v2.end(), inserter(v, ptr));

    cout << " Our new vector after inserting elements is: ";
    
    for ( auto &element : v)
    {
        cout << element << " ";
    }

    cout << endl;
   

}

