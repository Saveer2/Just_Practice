#include <iostream>
#include <string>
using namespace std;

//base class
class Animal{
    public:
        virtual void speak(){ //Virvual Function
            cout<<"Animal Speak"<<endl;
        }
};
class dog:public Animal{
    public:
        void speak() override{
            cout<<"Dog Barks"<<endl;
        }
};
class cat:public Animal{
    public:
        void speak() override{
            cout<<"Cat Meow"<<endl;
        }
};


int main(){
    Animal* animalptr;
    dog d;
    cat c;

    //For dog
    animalptr = &d;
    animalptr->speak();

    //For cat
    animalptr =&c;
    animalptr->speak();

    return 0;
}