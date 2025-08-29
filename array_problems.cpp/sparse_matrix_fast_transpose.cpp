#include <iostream>
using namespace std;

const int MAX = 50;

struct Term {
    int row, col, value;
};

void fastTranspose(Term a[], Term b[]) {
    int rowTerms[MAX], startingPos[MAX];
    int numCols = a[0].col;
    int numTerms = a[0].value;

    b[0].row = numCols;
    b[0].col = a[0].row;
    b[0].value = numTerms;

    if (numTerms > 0) {
        for (int i = 0; i < numCols; i++)
            rowTerms[i] = 0;

        for (int i = 1; i <= numTerms; i++)
            rowTerms[a[i].col]++;

        startingPos[0] = 1;
        for (int i = 1; i < numCols; i++)
            startingPos[i] = startingPos[i - 1] + rowTerms[i - 1];

        for (int i = 1; i <= numTerms; i++) {
            int j = startingPos[a[i].col]++;
            b[j].row = a[i].col;      
            b[j].col = a[i].row;
            b[j].value = a[i].value;  
        }
    }
}

int main() {
    Term a[MAX], b[MAX];
    int rows, cols, num;

    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** SPARSE MATRIX FAST TRANSPOSE!! **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    cout << "Enter number of rows, cols, and nonzero terms: ";
    cin >> rows >> cols >> num;

    a[0].row = rows;
    a[0].col = cols;
    a[0].value = num;

    cout << "Enter row, col, value for each nonzero term:\n";
    for (int i = 1; i <= num; i++) {
        cin >> a[i].row >> a[i].col >> a[i].value;
    }

    fastTranspose(a, b);

    cout << "----------------------------------------------------------------" << endl;
    cout << "\nFast Transpose:\n";
    for (int i = 1; i <= b[0].value; i++) {
        cout << b[i].row << " " << b[i].col << " " << b[i].value << endl;
    }
    cout << "----------------------------------------------------------------" << endl;

    return 0;
}
