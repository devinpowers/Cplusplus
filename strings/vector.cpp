
#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> & data)
{
    data.push_back(12);
    for(int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t";
    }
    cout << "\n";
}

int main()
{
    vector<int> data = {1, 2, 3};
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);

}

