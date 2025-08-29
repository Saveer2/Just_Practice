#include <iostream>
using namespace std;

void sparseTriplet(int A[10][10], int n, int m) {
    cout<<"Triplet Representation:\nRow Col Value\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(A[i][j]!=0)
                cout<<i<<" "<<j<<" "<<A[i][j]<<endl;
        }
    }
}

int main() {
    int n,m,A[10][10];
    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** SPARSE MATRIX REPRESENTATION!! **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    cout<<"Enter rows and columns: ";
    cin>>n>>m;
    cout<<"Enter Matrix A:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>A[i][j];
        }
    }
    cout << "----------------------------------------------------------------" << endl;
    sparseTriplet(A,n,m);
    cout << "----------------------------------------------------------------" << endl;
    return 0;
}
