#include <iostream>
using namespace std;

void addMatrices(int A[10][10], int B[10][10], int n, int m) {
    cout << "Sum:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n,m,A[10][10],B[10][10];

    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** MATRIX ADDITION!! **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;
    cout<<"Enter rows and columns: ";
    cin>>n>>m;
    cout<<"Enter Matrix A:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>A[i][j];
        }
    }
    cout<<"Enter Matrix B:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>B[i][j];
        }
    }
    cout << "----------------------------------------------------------------" << endl;
    addMatrices(A,B,n,m);

    cout << "----------------------------------------------------------------\n" << endl;
    return 0;
}
