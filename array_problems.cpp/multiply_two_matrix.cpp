#include <iostream>
using namespace std;

int main(){
    int r1,r2,c1,c2;

    cout<<"Enter Row and Column For First Matrix : "<<endl;
    cin>>r1>>c1;

    int Arr1[r1][c1];
    cout<<"\nEnter elements of first matrix : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>Arr1[i][j];
        }
    }

    cout<<"\nEnter Row and Column For Second Matrix : "<<endl;
    cin>>r2>>c2;

    if(c1 != r2){
        cout<<"\nMartrix Multiplication Not Possible!!"<<endl;
        return 0;
    }

    int Arr2[r2][c2];
    cout<<"\nEnter elements of first matrix : "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>Arr2[i][j];
        }
    }

    int Arr3[r1][c2] ={0};

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            Arr3[i][j] = 0;
            for(int k=0;k<c1;k++){
                Arr3[i][j] += Arr1[i][k] * Arr2[k][j];
            }
        }
    }

    cout<<"\nResultant Matrix After Multiplication : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<Arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}