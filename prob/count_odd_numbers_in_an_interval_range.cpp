#include <iostream>
using namespace std;

int odd_numbers(int low,int high){
    return (high+1)/2 - low/2;
}

int main(){
    int high,low;
    cout<<"Enter High and low Value : "<<endl;
    cin>>high>>low;

    int value=odd_numbers(low,high);
    cout<<"** Number of Odd numbers : "<<value<<endl;
}