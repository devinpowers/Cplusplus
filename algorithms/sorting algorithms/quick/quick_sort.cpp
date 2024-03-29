
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::rand;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    // int arr[] = {10, 7, 8, 9, 1, 5,89, 69, 23, 0, 4, 8, 2, 23, 100, 90, 43, 2, -2, -5, 9, 0, 8, 9, 10, 43};

   // int n = sizeof(arr)/sizeof(arr[0]);

    int sz;
   cout<<"Enter the size of array::";
   cin>>sz;
   int arr[sz];
   for(int i=0;i<sz;i++)
   {
       arr[i]=rand()%100;  //Generate number between 0 to 99

   }
      
    cout << endl;
    cout << "Unsorted array: ";

    printArray(arr,sz);
        cout << endl;

    cout << "Performing Quick Sort on our Random Array! " << endl;

    quickSort(arr, 0, sz-1);
    cout << "Sorted array: ";

    printArray(arr, sz);
    cout << endl;
}

