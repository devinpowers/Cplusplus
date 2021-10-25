#include <iostream>
using std::endl;
using std::cout;


void findFirstLast(int arr[], int n, int x){

    int first = -1, last = -1;
    for (int i =0; i < n; i++){
        if (x != arr[i]){
            continue;
        }
        if (first == -1){
            first = i;
        }
        last = i;
    }



    if (first != -1){
        cout << "First Occurrence = " << first <<
        "\nLast Occurrence = " << last << endl;
    }
    else{
        cout << "Not Found" << endl;
    }


}
int main(){
        
    int A[] = { 2, 4, 10, 10,10, 18, 20, 25, 40};
    int n = sizeof(A) / sizeof(int);
   /// cout << "n: " << n << endl;
    int x = 10;


    // Call functionm
    findFirstLast(A,n, x);
}

