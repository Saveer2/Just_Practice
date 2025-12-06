#include <iostream>
using namespace std;

void add(int A[20][20], int B[20][20], int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<A[i][j] + B[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sub(int A[20][20], int B[20][20], int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<A[i][j] - B[i][j]<<" ";
        }
        cout<<endl;
    }
}

void multiply(int A[20][20], int B[20][20], int r1, int c1, int c2){
    int result[20][20] = {0};

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int A[20][20], int r, int c){
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
}

void symmetric(int A[20][20], int r, int c){
    bool flag = true;

    if(r != c){
        cout<<"NOT SYMMETRIC"<<endl;
        return;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j] != A[j][i]){
                flag = false;
            }
        }
    }

    if(flag){
        cout<<"SYMMETRIC"<<endl;
    }else{
        cout<<"NOT SYMMETRIC"<<endl;
    }
}

void identity(int A[20][20], int r, int c){
    bool flag = true;

    if(r != c){
        cout<<"NOT IDENTITY"<<endl;
        return;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                if(A[i][j] != 1){
                    flag=false;
                }
            }
            else{
                if(A[i][j] != 0){
                    flag=false;
                }
            }
        }
    }

    if(flag){
        cout<<"IDENTITY MATRIX"<<endl;
    }else{
        cout<<"NOT IDENTITY"<<endl;
    }
}

void division(int A[20][20], int B[20][20], int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<A[i][j] / B[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sparse(int A[20][20], int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j] != 0){
                cout<<i<<" "<<j<<" "<<A[i][j]<<endl;
            }
        }
    }
}

int main(){
    int A[20][20], B[20][20];
    int r, c, choice;
    char ch;

    cout<<"Enter rows and cols: ";
    cin>>r>>c;

    cout<<"Enter Matrix A:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }

    cout<<"Enter Matrix B:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>B[i][j];
        }
    }

    do{
        cout<<"1.Add  2.Sub  3.Multiply  4.Division  5.Transpose(A)  6.Symmetric(A)  7.Identity(A)  8.Sparse(A)\n";
        cin>>choice;

        switch(choice){
            case 1:{
                add(A,B,r,c);
                break;
            }
            case 2:{
                sub(A,B,r,c);
                break;
            }
            case 3:{
                multiply(A,B,r,c,c);
                break;
            }
            case 4:{
                division(A,B,r,c);
                break;
            }
            case 5:{
                transpose(A,r,c);
                break;
            }
            case 6:{
                symmetric(A,r,c);
                break;
            }
            case 7:{
                identity(A,r,c);
                break;
            }
            case 8:{
                sparse(A,r,c);
                break;
            }
            default:{
                cout<<"Invalid"<<endl;
            }
        }

        cout<<"** Do you want to repeat (y/n): ";
        cin>>ch;

    }while(ch == 'y');

    return 0;
}
