#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	double s1,s2,s3,s4;
	cout<<"Enter Student Name : ";
	cin>>name;
	cout<<"Enter Marks of Subject 1 : ";
	cin>>s1;
	cout<<"Enter Marks of Subject 2 : ";
	cin>>s2;
	cout<<"Enter Marks of Subject 3 : ";
	cin>>s3;
	cout<<"Enter Marks of Subject 4 : ";
	cin>>s4;
	
	double percentage = (s1+s2+s3+s4) / 2;
	cout<<"\n--------------------------------------"<<endl;
	cout<<"\tDES Pune University"<<endl;
	cout<<"Name : "<<name<<"\tDiv : ECE AIML\nYear : 1\tSem : 2"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"*Subjects\t\t*Marks"<<endl;
	cout<<"--------------------------------------\n"<<endl;
	cout<<"Subject 1 :"<<"\t\t"<<s1<<endl;
	cout<<"Subject 2 :"<<"\t\t"<<s2<<endl;
	cout<<"Subject 3 :"<<"\t\t"<<s3<<endl;
	cout<<"Subject 4 :"<<"\t\t"<<s4<<endl;
	cout<<"--------------------------------------"<<endl;
	if(percentage >=35){
		cout<<"You are Pass!!"<<endl;
	}
	cout<<"--------------------------------------\n"<<endl;

}
