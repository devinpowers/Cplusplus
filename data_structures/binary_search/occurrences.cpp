

#include <iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

int CountOccurrences(int arr[], int n, int x)
{
    int occurence = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          occurence++;
    return occurence;
}

int main()
{
    int arr[] = {1, 1, 3, 3, 5, 5, 5, 5, 5, 9, 9, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 5;

    int occur = CountOccurrences(arr, n, x);
    cout << "The Number of Occurrences of " << x << " is: " << occur << endl;
}



