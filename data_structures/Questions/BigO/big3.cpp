

#include<iostream>

int f(int n){

    if (n <= 1){
        return 1;
    }
    return f(n-1) + f(n-1);
}

int main(){

    // Pass to f
    std::cout << f(12) << std::endl;
}


