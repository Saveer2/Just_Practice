#include <iostream>
using namespace std;

int prime(int num){
	if(num<=1){
		return 0;
	}
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int num;
	cout<<"**Prime Number!!\n"<<endl;
	cout<<"Enter a Number : ";
	cin>>num;
	
	if(prime(num)){
		cout<<num<<" is a prime number!!"<<endl;
	}
	else{
		cout<<num<<" is not a prime number!!"<<endl;
	}
}
