#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n,k;

    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"\nEnter "<<n<<" Elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\nEnter K(number of rotations : ) : ";
    cin>>k;

    k=k%n; //to normalize it;

    cout<<"Your expected output : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[(n-k+i)%n]<<" ";
    }

    return 0;
}
