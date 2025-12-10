#include <iostream>
using namespace std;

bool powerfour(int n){
    if(n <= 0){
        return false;
    }
    while(n % 4 == 0){
        n /= 4;
    }
    return n == 1;
}

int main(){
    int n;
    cout << "** Enter the number : ";
    cin >> n;

    if(powerfour(n)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
