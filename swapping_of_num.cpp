#include <iostream>
using namespace std;

class sample{
    public:
        void swap(int a,int b){
            cout<<"Original numbers are : "<<a<<" And "<<b<<endl;
            int temp;
            temp = a;
            a=b;
            b=temp;
            cout<<"Numbers are : "<<a<<" and "<<b<<endl;
        }
};

int main(){
    int a,b;
    sample s1;
    cout<<"Enter two numbers : ";
    cin>>a;
    cin>>b;
    s1.swap(a,b);

    return 0;
}