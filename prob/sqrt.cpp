#include <iostream>
using namespace std;

int sqrtvalue(int x){
    int i=1;

    while( i <= x/i){
        i++;
    }

    return i-1;
}

int main(){
    int x;
    do{
        cout<<"\n** Enter the value of x : ";
        cin>>x;

        int result = sqrtvalue(x);

        cout<<"** Sqrt of x is : "<<result<<endl;
    }while(1);

    return 0;
}