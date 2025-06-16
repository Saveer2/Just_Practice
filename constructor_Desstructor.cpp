#include <iostream>
#include <string>
using namespace std;

class call{
    private:
        string name;
        int age;
    public:

        call(string n,int a){
            name = n;
            age = a;
            cout<<"constructor called for "<<name<<endl;
        }
        void display(){
            cout<<"Name : "<<name<<" , Age "<<age<<endl;
        }
        ~call(){
            cout<<"Destructur called for "<<name<<endl;
        }
};

int main(){
    call call1("JJ",20);
    call call2("KK",20);

    call1.display();
    call2.display();
    return 0;
}