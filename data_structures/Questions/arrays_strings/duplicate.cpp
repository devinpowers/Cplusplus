/*
    pass in an array with numbers and check if there is duplicate number and if there is
    then return true

    Else, if there isnt any duplicates, return false


*/


#include<iostream>
using std::cout;
using std::endl;
#include<vector>
using std::vector;
using std::boolalpha;



bool check_duplicate(int* arr, int size){

    // empty vector
    vector<bool> int_set(100); // Vector contains true or false if the number has been added

    for (int i = 0; i< size; i++ )
    {
        if (int_set[arr[i]]){
            // if true duplicate
            return true;
        }
        else{
            int_set[arr[i]] = true;
        }
    }

    return false; // as there is no duplicate


}

int main(){

    int nums[] = {1,2,3,4,5,6,7,9,10,8,23,45,69}; // An array of numbers
    int size = sizeof(nums) / sizeof(int);

    cout << boolalpha <<  check_duplicate(nums, size) << endl;


}