

#include <iostream>
using std::cout;
using std::endl;

int main(){

    int arr[5];

    int top = -1;

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    
    int n=0;
  
   while(n<=4){
      cout<<arr[n]<<endl;
      n++;
   }


   // Change some arr values
    cout << "------------ " << endl;
    cout << "Top Before: " << top << endl;
   arr[++top] = 3; // ++ moves up one


    int t = 0;
    while(t<=4){
      cout<<arr[t]<<endl;
      t++;
   }
   cout << "Top: " << top << endl;

   cout << "Array now: " << arr[top--] << endl;
   cout << "Top: " << top << endl;

    cout << "print value: " << endl;
    int g = 0;
    while(g<=4){
      cout<<arr[g]<<endl;
      g++;
   }
}   

