#include <iostream>
using namespace std;

void Largest(int a, int b, int c){
	if(a>b && a>c){
		cout<<a<<" is the largest Number!!"<<endl;
	}
	else if(b>a && b>c){
		cout<<b<<" is the largest Number!!"<<endl;
	}
	else if(c>a && c>b){
		cout<<c<<" is the largest Number!!"<<endl;
	}
}
int main(){
	int num1,num2,num3;
	cout<<"Enter three numbers : ";
	cin>>num1>>num2>>num3;
	cout<<"\n";
	Largest(num1,num2,num3);
	
	return 0;
}
