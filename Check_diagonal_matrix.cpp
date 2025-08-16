#include <iostream>
using namespace std;

int main(){
    int arr[100][100];
    int n;

    cout<<"Enter size : ";
    cin>>n;

    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\nMatrix Representation : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    bool check = true;

    //check
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && arr[i][j] != 1){
                check = false;
            }else if(i != j && arr[i][j] != 0){
                check = false;
            }
        }
    }

    if(check==true){
        cout<<"\nYes"<<endl;
    }else{
        cout<<"\nNo"<<endl;
    }

    return 0;

}