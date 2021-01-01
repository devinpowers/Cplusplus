

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



Nested Vectors



    #include <iostream>
    #include <vector>

    using namespace std;


    int main()
    {   
        vector <vector<int>> grades =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
            
        };


        for(int r = 0; r < 3; r++)
        {
            for( int c =0; c <3; c++)
            {
                cout << grades[r][c] << "\t";
            }
            cout << "\n";
        }

        
        
        return 0;
    }


Multidimensional Array

print with nested for loop


    #include <iostream>


    using namespace std;


    int main()
    {
        int grades[][3] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};

        for(int r = 0; r < 3; r++)
        {
            for( int c =0; c <3; c++)
            {
                cout << grades[r][c] << "\t";
            }
            cout << "\n";
        }

        
        
        return 0;
    }