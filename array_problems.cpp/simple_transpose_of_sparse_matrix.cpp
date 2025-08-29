#include <iostream>
using namespace std;

class Term {
public:
    int row, col, value;
};


void transpose(Term a[], Term b[]) {
    int n = a[0].value; 
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].value = n;

    if (n > 0) {
        int currentB = 1;
        for (int i = 0; i < a[0].col; i++) { 
            for (int j = 1; j <= n; j++) {
                if (a[j].col == i) {
                    b[currentB].row = a[j].col;
                    b[currentB].col = a[j].row;
                    b[currentB].value = a[j].value;
                    currentB++;
                }
            }
        }
    }
}

int main() {
    int m, n, num;
    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** SPARSE MATRIX TRANSPOSE!! **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    cout << "Enter number of rows, cols, and non-zero elements: ";
    cin >> m >> n >> num;

    Term a[100], b[100];
    a[0].row = m;
    a[0].col = n;
    a[0].value = num;

    cout << "Enter row, col, value for each non-zero element:\n";
    for (int i = 1; i <= num; i++) {
        cin >> a[i].row >> a[i].col >> a[i].value;
    }

    transpose(a, b);

    cout << "\nOriginal Sparse Matrix Representation:\n";
    for (int i = 0; i <= num; i++) {
        cout << a[i].row << " " << a[i].col << " " << a[i].value << endl;
    }

    cout << "----------------------------------------------------------------" << endl;
    cout << "\nTranspose Sparse Matrix Representation:\n";
    for (int i = 0; i <= num; i++) {
        cout << b[i].row << " " << b[i].col << " " << b[i].value << endl;
    }
    cout << "----------------------------------------------------------------" << endl;

    return 0;
}
