#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;



void swap (int *xp, int *yp)
{
  int temp = *xp;
  *xp =*yp;
  
  *yp = temp;
}


void bubblesort(int arr[], int n){

  int i, j;
  for ( i = 0; i < n-1; i++)
  {

    for ( j = 0; j < n-i-1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        swap(&arr[j], &arr[j+1]);
      }
    }
  }
}

void printarray(int arr[],int size){
  int i;
  for (i = 0; i < size; i++ )
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){

  //int arr[] = { 34,25,63,23,5,32,6,0,342,24,9,10,23,69,45,120,1,7};
  int arr[] = { 2,8,5,3,9,4,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  bubblesort(arr, n);
  cout << "sorted array: \n";
  printarray(arr,n);

}
