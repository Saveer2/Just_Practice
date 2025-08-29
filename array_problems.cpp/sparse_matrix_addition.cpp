#include <iostream>
using namespace std;

void addSparse(int A[10][10], int B[10][10], int n, int m) {
    cout<<"Result Triplet:\nRow Col Value\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int sum = A[i][j] + B[i][j];
            if(sum!=0)
                cout<<i<<" "<<j<<" "<<sum<<endl;
        }
    }
}

int main() {
    int n,m,A[10][10],B[10][10];
    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** SPARSE MATRIX ADDITION!! **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    cout<<"Enter rows and columns: ";
    cin>>n>>m;
    cout<<"Enter Sparse A:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>A[i][j];
        }
    }
    cout<<"Enter Sparse B:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>B[i][j];
        }
    }
    cout << "----------------------------------------------------------------" << endl;
    addSparse(A,B,n,m);
    cout << "----------------------------------------------------------------" << endl;
    return 0;
}
