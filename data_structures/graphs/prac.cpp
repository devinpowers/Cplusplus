/*
    Read a txt file

*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int sum = 0;
    int x, y, z;
    int sum_y = 0;
    int sum_z = 0;

    ifstream inFile;
    
    inFile.open("out.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while (inFile >> x >> y >> z) {
        
        sum = sum + x;
                cout << "x: " << x << endl;

        sum_y = sum_y +y;

        sum_z = sum_z + z;
        
    }
    
    inFile.close();
    cout << "Sum of x = " << sum << endl; 
        
    cout << "Sum of y = " << sum_y << endl; 
        cout << "Sum of z = " << sum_z << endl; 


    return 0;
}