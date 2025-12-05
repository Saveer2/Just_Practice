#include <iostream>
using namespace std;

void linear_search(int arr[], int n, int key){
    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout<<"\n** Element "<<key<<" Is At This Position : "<<i<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<"\n** Element Not Found!!"<<endl;
    }
}

int Binary_search(int arr[], int n,int key){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            low = mid+1;
        }else{
            high = mid -1;
        }
    }
    return -1;
}

void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[20];
    int n, key, a;
    char b, ch;
    do{
        cout<<"\n\t** Searching Methods **"<<endl;

        cout<<"** Enter Size of Array : ";
        cin>>n;

        cout<<"** Enter Your Array Elements : "<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<"** Enter The Element You Need to find : ";
        cin>>key;

        cout<<"** Which Searching Method You want to use (1. Linear/2. Binay): "<<endl;
        cin>>a;

        if(a==1){
            linear_search(arr,n,key);
        }
        else if(a==2){
            cout<<"** Is your Array Sorted (y/n): ";
            cin>>b;
            if(b=='y'){
                int pos = Binary_search(arr,n,key);
                if(pos<0){
                    cout<<"\n** Element Not Found!!"<<endl;
                }else{
                    cout<<"\n** Element Found At This Position : "<<pos<<endl;
                }
            }else{
                bubble_sort(arr,n);
                int pos = Binary_search(arr,n,key);
                if(pos<0){
                    cout<<"\n** Element Not Found!!"<<endl;
                }else{
                    cout<<"\n** Element Found At This Position : "<<pos<<endl;
                }
            }
        }else{
            cout<<"** INVALID VALUE!!"<<endl;
        }
        cout<<"\n----------------------------------------"<<endl;
        cout<<"** Do You Want To Continue (y/n): ";
        cin>>ch;
        cout<<"----------------------------------------\n"<<endl;
        
    }while(ch == 'y');

    return 0;
}