#include <iostream>
using namespace std;

const int N = 8;

void fillMatrix(int arr[N][N]) { // just to fill matrix from 1 to 64....
    int val = 1;
    for (int i = 0; i < N; i++) {       
        for (int j = 0; j < N; j++) {   
            arr[i][j] = val++;
        }
    }
}

void zigZagScan(int arr[N][N], int zigzag[N * N]) {
    int index = 0;
    for (int d = 0; d < 2 * N - 1; d++) {
        if (d % 2 == 0) {
            int i = (d < N) ? d : N - 1;
            int j = d - i;
            while (i >= 0 && j < N) {
                zigzag[index++] = arr[i][j];
                i--;
                j++;
            }
        } else {
            int j = (d < N) ? d : N - 1;
            int i = d - j;
            while (j >= 0 && i < N) {
                zigzag[index++] = arr[i][j];
                i++;
                j--;
            }
        }
    }
}

void displayMatrix(int arr[N][N]) {
    cout << "** Original 8x8 Matrix:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void displayZigZag(int zigzag[N * N]) {
    cout << "\n** Zig-Zag Scanned 1x64 Array:\n";
    for (int i = 0; i < N * N; i++) {
        cout << zigzag[i] << " "<<endl;
    }
    cout << endl;
}

int main() {
    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** 8x8 ARRAY TO 1x64 Array **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    int arr[N][N];
    int zigzag[N * N];

    fillMatrix(arr);          
    displayMatrix(arr);       
    zigZagScan(arr, zigzag);  
    displayZigZag(zigzag);    
    cout << "----------------------------------------------------------------" << endl;
    
    return 0;
}
