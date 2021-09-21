#include <iostream>
#include <string>
using std::cout; using std::endl; using std::fixed; using std::cin;
#include <iomanip>
using std::setprecision; using std::string; 
#include <cmath>

int main(){
    //init variables
    long year;
    double temp;
    double greater_temp;
    long greater_year;
    double new_slope;
    double ny;
    double gy;
    long new_year;

    cin >> year;
    
    //temperature at inputted year
    temp = .01173 * year + 34.3491;

    //year when temperature 7 degrees greater
    greater_temp = temp + 7;
    gy = (greater_temp - 34.3491)/.01173;
    greater_year = round(gy);

    //year when temperature 7 degrees greater and new slope
    cin >> new_slope;
    ny = (greater_temp - 34.3491)/new_slope;
    new_year = round(ny);

    //output data
    cout << fixed;
    cout << setprecision(2);
    cout << temp << endl;
    cout << greater_year << endl;
    cout << new_year << endl;
}
