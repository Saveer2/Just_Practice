#include <iostream>
using namespace std;

void searchElement(int A[10][10], int n, int m, int key) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(A[i][j]==key) {
                cout<<"Output: Element found at position ("<<i<<","<<j<<")";
                return;
            }
        }
    }
    cout<<"Output: Element not found";
}

int main() {
    int n,m,A[10][10],key;
    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** SEARCH IN 2D ARRAY!! **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    cout<<"Enter rows and columns: ";
    cin>>n>>m;
    cout<<"Enter Matrix A:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>A[i][j];
        }
    }
    cout<<"Enter element to search: ";
    cin>>key;
    cout << "----------------------------------------------------------------" << endl;
    searchElement(A,n,m,key);
    cout << "\n----------------------------------------------------------------" << endl;
    return 0;
}
