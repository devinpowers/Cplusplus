
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<iomanip> 
using std::setprecision;
#include<string>
using std::string;

const string code = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";


double reduction ( string original, string encoded )
    {
        double reduction_ratio;

        double og_length =  original.length();
        double encode_length = encoded.length();
     
        reduction_ratio = (1-(og_length - encode_length)/(og_length));

        setprecision(2) << reduction_ratio;

        return reduction_ratio;

    }


int main(){

    cout << std::fixed << std::showpoint;
    cout << setprecision(2);
    cout << reduction ("ewewewewew", "sds") << endl;


     
}


