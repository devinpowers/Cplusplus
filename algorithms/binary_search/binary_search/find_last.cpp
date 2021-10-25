
#include <iostream>
using std::cout;
using std::endl;

 
// Function for finding first and last occurrence of an elemtn

void FindFirstAndLast(int A[], int n, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (x != A[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    // print results
    if (first != -1)
        cout << "First Occurrence = " << first
             << "\nLast Occurrence = " << last;
    else
        cout << "Not Found";
}
 
// Driver code
int main()
{
    int A[] = { 2, 4, 10, 10,10, 18, 20, 25, 40};
    int n = sizeof(A) / sizeof(int);
    int x = 10;

    cout << "Finding the first and last occurence of: " << x << endl;
    FindFirstAndLast(A, n, x);
    cout << endl;

}

