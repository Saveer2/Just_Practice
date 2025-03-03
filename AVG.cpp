#include <iostream>
using namespace std;

class Student{
public:
double subject1,subject2,subject3,subject4,subject5;

Student(double m,double n, double a,double b, double c):
subject1{m},subject2{n},subject3{a},subject4{b},subject5{c}{
}
};

double average_marks(Student s1){
return (s1.subject1 + s1.subject2 + s1.subject3 + s1.subject4 + s1.subject5)/5;
}

int main(){
double sub1,sub2,sub3,sub4,sub5;
cout<<"\t-----------------------------"<<endl;
cout<<"\t| ** AVERAGE CALCULATOR !! |"<<endl;
cout<<"\t-----------------------------"<<endl;
cout<<"\n* Enter Marks of 5 Subjects : \n"<<endl;
cout<<"**Subject 1 : ";
cin>>sub1;
cout<<"**Subject 2 : ";
cin>>sub2;
cout<<"**Subject 3 : ";
cin>>sub3;
cout<<"**Subject 4 : ";
cin>>sub4;
cout<<"**Subject 5 : ";
cin>>sub5;
cout<<"-------------------------------------"<<endl;
Student student1(sub1,sub2,sub3,sub4,sub5);
cout<<"**Average Marks = "<<average_marks(student1)<<"\n"<<endl;
if(average_marks(student1) >= 60){
cout<<"**You are Pass!!"<<endl;
}else{
cout<<"**You are Fail!!";
}
cout<<"-------------------------------------"<<endl;

return 0;

}
