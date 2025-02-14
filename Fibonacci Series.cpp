#include <iostream>
using namespace std;

class fibonacci{
public:
	
	int fibo(int n){
		
		int a= 0,b=1,next;
		if(n>=1){
		cout<<a<<" ";
		}
		if(n>=2){
			cout<<b<<" ";
		}
		for(int i=3;i<=n;i++){
			next = a+b;
			cout<<next<<" ";
		
			a=b;
			b=next;
		}
		cout<<endl;
		return 0;
	}	
};
int main(){
	fibonacci f1;
	int num;
	cout<<"Enter the number of terms : ";
	cin>>num;
	f1.fibo(num);
	return 0;
}
