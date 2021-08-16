

#include <iostream>
using std::cout; using std::endl;

void printArray(int arr[], int size);

void merge(int Arr[], int start, int mid, int end) {
	// create a temp array
	int temp[end - start + 1];

	// crawlers for both intervals and for temp
	int i = start, j = mid+1, k = 0;

	// traverse both arrays and in each iteration add smaller of both elements in temp 
	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}

	// add elements left in the first interval 
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}

	// add elements left in the second interval 
	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}

	// copy temp to original interval
	for(i = start; i <= end; i += 1) {
		Arr[i] = temp[i - start];
	}

  // Can I print the array?

  cout << "After Calling Merge: ";
  printArray(Arr, 5);
}

// Arr is an array of integer type
// start and end are the starting and ending index of current interval of Arr

void MergeSort(int Arr[], int start, int end) {

	if(start < end) {
		int mid = (start + end) / 2;
		MergeSort(Arr, start, mid);

    // Mid once the mergeSort call is done with the left side will be equal to 0 
		MergeSort(Arr, mid+1, end);
		merge(Arr, start, mid, end);

	}

}


// print our array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}


int main()
{

  // array to pass
  int arr[] = {9,7,3,6,2};

  
  int size = sizeof(arr) / sizeof(arr[0]);
  
  int start = 0;

  cout << "Array before being sorted: ";
  printArray(arr, size);
  cout << "OK";
  cout << endl;
  MergeSort(arr, start, size -1);  

  cout << endl;
  cout << "Array AFTER being sorted: ";
  printArray(arr, size);


  cout << "___________________________" << endl;

  printArray(arr,size); 
}

