#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[100][100];
    int mainsum=0; 
    int secsum=0;

    cout<<"Enter Size Of Square matrix : "<<endl;
    cin>>n;

    cout<<"\nEnter elements in matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        mainsum += arr[i][i];
        secsum += arr[i][n-i-1];
    }

    cout<<"\nMatrix Representation : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nMain diagonal sum : "<<mainsum<<endl;
    cout<<"Secondary diagonal sum : "<<secsum<<endl;

    return 0;
}