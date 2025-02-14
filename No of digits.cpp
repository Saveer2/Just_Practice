#include <iostream>
using namespace std;

class no_of_digits{
public:
	void digits(long long num){
		if(num==0){
			cout<<"Your number is 1 digit!!"<<endl;
			return;
		}
		int count = 0;
		while(num!=0){
			num/=10;
			count++;
		}
		cout<<"The number has "<<count<<" digits"<<endl;
	}
};
int main(){
	no_of_digits c1;
	long long n;
	cout<<"Enter a Number : ";
	cin>>n;
	c1.digits(n);
	return 0;
}
