
#include <iostream>
using namespace std;

int main(){
   int arr[] = {11, 22, 33, 44, 55};
   int n=0;
  
   while(n<=4){
      cout<<arr[n]<<endl;
      n++;
   }
   return 0;
}
//  Iterators could not be used on primitive type arrays, only on collections.
