#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

int main()

{
    vector<int> data = {1, 2, 3};

    data.push_back(4);

    cout << "First Index: " << data[0] << endl;
    cout << "Second Index: " << data[1] << endl;
    cout << "Third Index: " << data[2] << endl;
    cout << "Fourth index: " << data[3] << endl;

}