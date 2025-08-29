#include <iostream>
using namespace std;

bool isSymmetric(int A[10][10], int n) {
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(A[i][j]!=A[j][i]) return false;
    return true;
}

int main() {
    int n,A[10][10];
    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** CHECK SYMMETRIC MATRIX!! **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    cout<<"Enter size of square matrix: ";
    cin>>n;
    cout<<"Enter Matrix A:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            cin>>A[i][j];
        }
    }

    cout << "----------------------------------------------------------------" << endl;
    if(isSymmetric(A,n)) cout<<"Output: Symmetric Matrix"<<endl;
    else cout<<"Output: Not Symmetric Matrix"<<endl;
    cout << "----------------------------------------------------------------" << endl;
    return 0;
}
