/*  

  Problem 1.1

    Sorted Merge: You're given two sorted arrays, A and B, where A has a larg enough buffer at the end to hold B.

    Write a method to merge B into A in sorted order!


*/




#include <iostream>
#include <string>

using namespace std;

void merge(int a[], int b[], int lastA, int lastB){

  int indexA = lastA - 1;
  int indexB = lastB - 1;
  int indexMerged = lastB + lastA - 1;

  while (indexB >= 0){
    if (indexA >= 0 && a[indexA] > b[indexB]){

      //
      a[indexMerged] = a[indexA];
      indexA--;
    }
    else{
      a[indexMerged] = b[indexB];
      indexB--;
    }
    indexMerged--;
  }
}

int main(){

      int a[13] = {0,4,14,23,29,30,31};
      int b[] = {6,7,29,31,100,200};

      merge(a, b, 7, 6);
      for (int i =0; i < 13; i++ ){
        cout << a[i] << " ";
      }

      cout << endl;
}