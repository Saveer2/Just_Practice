#include <iostream>
using namespace std;

int main(){
    int num[]={5,4,66,43,44};
    int size = 5;

    //smallest
    int smallest = INT_MAX;

    for(int i=0; i<size;i++){
        if(num[i]<smallest){

            smallest=num[i];
        }
    }
    cout<<"smallest = "<<smallest<<endl;

    //largest
    int Largest = INT_MIN;

    for(int i=0; i<size;i++){
        if(num[i]>Largest){

            Largest=num[i];
        }
    }
    cout<<"Largest = "<<Largest<<endl;
}