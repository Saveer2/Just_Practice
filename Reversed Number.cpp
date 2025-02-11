#include <iostream>
using namespace std;

int reversed_num(int num){
	int reversed = 0;
	while(num != 0){
		int digit = num %10;
		reversed = reversed *10 + digit;
		num /= 10;
	}
	return reversed;
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
