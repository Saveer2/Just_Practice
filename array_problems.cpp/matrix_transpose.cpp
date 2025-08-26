#include <iostream>
using namespace std;

void transpose(int A[10][10], int n, int m) {
    cout << "** Transpose:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n,m,A[10][10];
    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** MATRIX TRANSPOSE!! **" << endl;
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
    transpose(A,n,m);
    cout << "----------------------------------------------------------------\n" << endl;
    return 0;
}
