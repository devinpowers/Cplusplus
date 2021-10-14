/*
	O(n) Runtime

*/
#include<iostream>

int product(int a, int b){
	int sum = 0;
	for (int i= 0; i < b; i++ ){
		sum += a;
	}
	return sum;
}
int main(){
	

	int answer;
	// Call product
	answer = product(12, 20);
	std::cout << "Sum: " <<  answer<< std::endl;

}

