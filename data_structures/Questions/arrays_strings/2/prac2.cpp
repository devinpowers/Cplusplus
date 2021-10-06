#include<iostream>

using namespace std;
 
// function to print string in sorted order
void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str;

   cout << endl;
}
 
// Driver program to test above function
int main()
{
    string s = "geeksforgeeks";
    sortString(s);
    return 0;
}
