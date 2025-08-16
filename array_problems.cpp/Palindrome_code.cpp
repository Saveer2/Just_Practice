#include <iostream>
using namespace std;

int main(){

    int num,digit,reversed=0;
    cout<<"Enter an element : ";
    cin>>num;
    int original_num=num;

    while (num > 0) {
        digit = num % 10;           // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        num = num / 10;             // remove last digit
    }
    cout<<"Reversed Number : "<<reversed<<endl;
    cout<<"Original Numner : "<<original_num<<endl;
}