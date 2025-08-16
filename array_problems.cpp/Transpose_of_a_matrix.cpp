#include <iostream>
using namespace std;

int main(){
    int arr[100][100];
    int rows,cols;

    cout<<"Enter Rows and Columns : "<<endl;
    cin>>rows>>cols;

    cout<<"\nEnter Elements Of Matrix ; "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\nYour Original Matrix : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nTranspose Of Matrix : "<<endl;
    for(int j=0;j<cols;j++){
        for(int i=0;i<rows;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}