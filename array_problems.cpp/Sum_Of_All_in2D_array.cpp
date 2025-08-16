#include <iostream>
using namespace std;

int main(){
    int arr[100][100];
    int rows,cols;
    int sum=0;

    cout<<"Enter Rows And Columns : "<<endl;
    cin>>rows>>cols;

    cout<<"Enter Elements in Matrix : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
            sum+= arr[i][j];
        }
    }
    cout<<"\nMatrix Representation : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nSum of all elements : "<<sum<<endl;

    return 0;
}