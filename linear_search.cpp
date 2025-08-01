#include <iostream>
using namespace std;

int main(){
    int arr[5]={2,3,5,7,8};
    int target = 10;
    bool found = false;

    for(int i=0;i<5;i++){
        if(arr[i]==target){
            found=true;
        }
    }
    if(found==true){
        cout<<"Present!!"<<endl;
    }else{
        cout<<"Absent!!"<<endl;
    }

    return 0;
}