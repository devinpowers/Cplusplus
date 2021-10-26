/*  
    Find the first occurence of a number

*/



#include <iostream>
using std::cout;
using std::endl;



int FirstOcc(int arr[], int n, int k)
{
	int low = 0;
	int high = n-1;
	int firstOcc = -1;
	while(low <= high)
	{
		int mid = low + (high-low)/2;
		if(arr[mid] == k)
		{
			firstOcc = mid;
			high = mid-1;
		}
		else if(arr[mid] > k)
			high = mid-1;
		else
			low = mid+1;
	}
	return firstOcc;
}


 
// Driver code
int main()
{
    int A[] = { 2, 4, 10, 10, 10, 18, 20, 25, 40};
    int n = sizeof(A) / sizeof(int);
    int x = 10;
    cout << endl;

    cout << "The index position of the first occurance of " << x << " is: ";
    cout << FirstOcc(A, n, x) << endl;
    cout << endl;

}
