#include <iostream>
using std::cout;
using std::endl;

 
// Function for finding first and last occurrence of an elemtn

void FindFirstAndLast(int A[], int n, int x)
{
    int low = 0; // index 0
    int high = n-1; // last index in Array A
    int result = -1; // means we havent found x in the array so far

    while (low <= high){

        int mid = (low + high)/2;

       cout << "Mid:" << mid << endl;

        if (x == A[mid])
        {
            result = mid;
            
            low = mid + 1;

         //   cout << "result: " << result << endl; 
       //     cout << "Current Low: " << low << endl;
        }
        else if (x < A[mid])
        {
            high = mid - 1;

    //        cout << "high: " << high << endl;
        }
        else {
            low = mid + 1;
        }
    }
    if (low != -1)
        cout << "First Occurrence = " << low
             << "\nLast Occurrence = " << high;
    else
        cout << "Not Found";
 
}
 
// Driver code
int main()
{
    int A[] = { 2, 4, 10, 10, 10, 18, 20, 25, 40};
    int n = sizeof(A) / sizeof(int);
    cout << "n: " << n << endl;
    int x = 10;

    cout << "Finding the middle value of : " << x << endl;
    FindFirstAndLast(A, n, x);
    cout << endl;

}
