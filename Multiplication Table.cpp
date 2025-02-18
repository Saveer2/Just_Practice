#include <iostream>
using namespace std;

void table(int num){
	for(int i=1;i<=10;i++){
		int z = num*i;
		cout<<i<<" X "<<num<<" = "<<z<<endl;
	}
}
int main(){
	int x;
	
	cout<<"\t** Multiplication Table!!\n"<<endl;
	cout<<"Enter a number : ";
	cin>>x;
	table(x);
	
	return 0;
}
