

#include<iostream>

void foo(int array[], int size){

	int sum = 0;
    int product = 1;
	for (int i= 0; i < size; i++ ){
		sum += array[i];
	}
    for (int i = 0; i < size; i++ ){
        product *= array[i];
    }

    std::cout << sum << " + " << product << std::endl;
}

int main(){ 

    int arr[]  = {1,2,3,4,5,9};
    int size = 6;
    foo(arr, size);
}
	
