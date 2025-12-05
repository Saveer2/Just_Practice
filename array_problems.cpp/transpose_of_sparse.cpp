#include <iostream>
using namespace std;

void transpose(int a[][3], int b[][3]){
    int n = a[0][2];
    b[0][0] = a[0][1];
    b[0][1] = a[0][0];
    b[0][2] = n;
    
    if(n>0){
        int currentB = 1;
        for(int i=0;i<a[0][1];i++){
            for(int j=1;j<=n;j++){
                if(a[j][1] == i ){
                    b[currentB][0] = a[j][1];
                    b[currentB][1] = a[j][0];
                    b[currentB][2] = a[j][2];
                    currentB++;
                }
            }
        }
    }
}

int main(){
    int A[100][3], B[100][3];
    int rows, cols, values;

    cout<<"Enter Rows and Cols and Value : " <<endl;
    cin>>rows>>cols>>values;

    A[0][0] =rows;
    A[0][1] = cols;
    A[0][2] = values;

    cout<<"Enter Values of Sparse Matrix : "<<endl;
    for(int i=1;i<=values;i++){
        cin>>A[i][0]>>A[i][1]>>A[i][2];
    }

    transpose(A,B);

    cout<<"Transpose of Sparse Materix : "<<endl;
    for(int i=0;i<=B[0][2];i++){
        cout<<B[i][0]<<" "<<B[i][1]<<" "<<B[i][2]<<endl;
    }

    return 0;
}