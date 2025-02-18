#include <iostream>
using namespace std;

void leap_year(int year){
	if((year%4 == 0 && year%100 != 0)||(year %400==0)){
		cout<<year<<" is a leap Year!!"<<endl;
	}
	else{
		cout<<year<<" is not a leap Year!!"<<endl;
	}
}
int main(){
	int year;
	
	cout<<"\t** LEAP YEAR!!\n"<<endl;
	cout<<"Enter a Year : ";
	cin>>year;
	leap_year(year);
	
	return 0;
}
