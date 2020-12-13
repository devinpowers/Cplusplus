

#include <iostream>
#include <vector>

using namespace std;


print_array(int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        data[i]++;
        cout << data[i] << "\t";
    }
    cout << "\n";

}

int main()
{   
    int data[] = {1, 2, 3};

    print_array(data[], 3);

    return 0;

}



