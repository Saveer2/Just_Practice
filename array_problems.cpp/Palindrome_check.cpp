#include <iostream>
using namespace std;

int main(){

    int arr[10];
    int n, ispalindrome=1;

    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n/2;i++){ //checks
        if(arr[i] != arr[n-i-1]){
            ispalindrome=0;
            break;
        }
    }

    if(ispalindrome){
        cout<<"Array is a Palindrome!!"<<endl;
    }else{
        cout<<"Array is NOT a Palindrome!!"<<endl;
    }
}