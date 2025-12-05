#include <iostream>
using namespace std;

void bubble(int arr[20], int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; i++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[i+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertion(int arr[20], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}



void selection(int arr[20], int n){
    for(int i=0;i<n;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}

int main(){
    int arr[20];
    int n,choice;

    do{
        cout<<"\n\n\t**  SORTING METHOD!!  **\n"<<endl;

        cout<<"** Enter The Size of the array : ";
        cin>>n;

        cout<<"\n**Enter your Array Elements : "<<endl;
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }

        cout<<"** Choose your sorting method (1. Bubble 2. Insertion 3. Selection): ";
        cin>>choice;

        switch(choice){
            case 1:
                bubble(arr,n);
                break;

            case 2:
                insertion(arr,n);
                break;

            case 3:
                selection(arr,n);
                break;

            default:
                cout<<"** INVALID CHOICE!!"<<endl;
        }

        cout<<"\n** Sorted Array : "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"----------------------------------------"<<endl;
    }while(1);
    
    return 0;
}




