#include <iostream>
using namespace std;

int factorial(int num){
	int fact = 1;
	for(int i=1;i<=num;i++){
		fact*=i;
	}
	return fact;
}
int main(){
	int n;
	cout<<"**Factorial!!\n"<<endl;
	cout<<"Enter a number : ";
	cin>>n;
	if(n==0){
		cout<<"Please Enter a Positive Number!!"<<endl;
	}
	else{
		cout<<"Factorial of "<<n<<" : "<<factorial(n)<<endl;
	}
	
	return 0;
}
