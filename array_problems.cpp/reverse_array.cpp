#include <iostream>
using namespace std;

int main(){
    int arr[10];
    
    cout<<"Enter Elements : "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<"\nReverse Order : "<<endl;
    for(int i=10-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}