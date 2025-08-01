#include <iostream>
using namespace std;

int main(){
    int i;
    int arr[5]={2,3,45,6,7};

    cout<<"** ORIGINAL ORDER = "<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n\n** REVERSED ORDER = "<<endl;
    for(i=5-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return 0;

}