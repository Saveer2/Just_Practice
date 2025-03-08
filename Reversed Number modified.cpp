#include <iostream>
using namespace std;

int reversed_num(int num){
	int reversed = 0;
	while(num != 0){ // Loop runs as long as num is not zero
		int digit = num %10; // Get the last digit of num (modulus operation)
		reversed = reversed *10 + digit; // Add the digit to the reversed number (shift left by one place)
		num /= 10; // Remove the last digit from num (integer division by 10)
	}
	return reversed; // Return the reversed number after the loop finishes
}
int main(){
	cout<<"**Reversed Number!!\n"<<endl;
	int num;
	cout<<"Enter Your Number : ";
	cin>>num;
	if(num==0){
		cout<<"Please Enter number than one digit!!"<<endl;
	}
	else{
		cout<<"Reversed Form : "<<reversed_num(num)<<endl;
	}
	return 0;
}
