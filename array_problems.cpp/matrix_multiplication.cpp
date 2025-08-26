#include <iostream>
using namespace std;

void multiplyMatrices(int A[10][10], int B[10][10], int n, int m, int p) {
    int C[10][10] = {0};
    cout << "Product:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<p;j++) {
            for(int k=0;k<m;k++) {
                C[i][j] += A[i][k]*B[k][j];
            }
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n,m,p,A[10][10],B[10][10];
    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** MATRIX MULTIPLICATION!! **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    cout<<"Enter rows and cols of Matrix A: ";
    cin>>n>>m;
    cout<<"Enter Matrix A:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>A[i][j];
        }
    }
    cout<<"Enter cols of Matrix B: ";
    cin>>p;
    cout<<"Enter Matrix B:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++) {
            cin>>B[i][j];
        }
    }
    cout << "----------------------------------------------------------------\n" << endl;
    multiplyMatrices(A,B,n,m,p);
    cout << "----------------------------------------------------------------\n" << endl;
    return 0;
}
