#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int n,even =0,odd=0;
    int evencount=0,oddcount=0;

    cout<<"Enter Elements in your array : ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<"\nEven Elemnts are : "<<endl;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
            evencount++;
        }
    }

    cout<<"\n\n";
    cout<<"\nOdd Elements are : "<<endl;
    for(int i=0;i<10;i++){
        if(arr[i]%2 != 0){
            cout<<arr[i]<<" ";
            oddcount++;
        }
    }

    return 0;
}