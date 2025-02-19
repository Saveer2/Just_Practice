#include <iostream>
using namespace std;

//Switch Case Demo
void switch_case(int num){
	switch(num){
		case 1:
			cout<<"Cap = 100Rs!!"<<endl;
			break;
		case 2:
			cout<<"Shirt = 1000Rs!!"<<endl;
			break;
		default:
			cout<<"Invalid Choice!!"<<endl;
	}
}
int main(){
	int num;
	
	cout<<"What you want : \n1. Cap\n2. shirt"<<endl;
	cout<<"Enter your choice : ";
	cin>>num;
	switch_case(num);
	return 0;
}
