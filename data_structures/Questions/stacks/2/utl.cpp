#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void display(vector<int> v){
    for (int elem: v){
        cout << elem << " ";
    }
    cout << endl;
}

int main(){

    vector<int> odd{1,3,5,7};
    vector<int> even{2,4, 6,8};
    cout << "ODD before swap: " << endl;
    display(odd);
    cout << "EVEN before swap: " << endl;
    display(even);

    // Swap
    swap(odd,even);
    cout << "Odd after swap: " << endl;
    display(odd);
    cout << "Even after Swap: " << endl;
    display(even);

}

/* 
Output:

    ODD before swap: 
    1 3 5 7 
    EVEN before swap: 
    2 4 6 8 
    Odd after swap: 
    2 4 6 8 
    Even after Swap: 
    1 3 5 7 

*/


