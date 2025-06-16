#include <iostream>
#include <string>
using namespace std;

class binary{
    private:
        float real,imag;
    public:
        binary(float r = 0.0,float i = 0.0){
            real =r;
            imag =i;
        }

        binary operator +(binary b){
            binary temp;
            temp.real = real + b.real;
            temp.imag = imag + b.imag;
            return temp;
        }

        void display(){
            cout<<real <<" + "<<imag<<"i"<<endl;
        }
};

int main(){
    binary b1(2.3,3.4),b2(4.5,5.6),result;
    b1.display();
    b2.display();
    result = b1+b2;
    result.display();
    return 0;
}