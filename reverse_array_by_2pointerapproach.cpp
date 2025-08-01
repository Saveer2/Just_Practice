#include <iostream>
using namespace std;

void reverse_array(int arr[], int sz){
    int start = 0, end =sz-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[5]={2,3,4,5,6};
    int size = 5;


    cout<<"Before Reverse : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n\n";


    cout<<"After Reverse : ";
    reverse_array(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}