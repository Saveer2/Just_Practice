#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int n,max_val;

    cout<<"Enter Your Elements in Array : ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    int h=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>h){
            h=arr[i];
        }
    }
    cout<<"Max Element : "<<h<<endl;

    retrun 0;
}