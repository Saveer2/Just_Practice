#include <iostream>
using namespace std;

//if else statement demo
void if_else(int num){
	if(num>0){
		cout<<num<<" is a positive number!!"<<endl;
	}
	else{
		cout<<num<<" is a negative number!!"<<endl;
	}
}
int main(){
	int num;
	
	cout<<"Enter a number : ";
	cin>>num;
	if_else(num);
	return 0;
}
