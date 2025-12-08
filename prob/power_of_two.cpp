#include <iostream>
using namespace std;

bool power(int x){
    if(x<=0){
        return false;
    }
    return (x & (x-1)) == 0;
}

int main(){
    int x;
    cout<<"** Enter Value : ";
    cin>>x;

    if(power(x)==0){
        cout<<"** Is it power of two : False!!"<<endl;
    }else{
        cout<<"** Is it power of two : True!!"<<endl;
    }

    return 0;
}