#include <iostream>
using namespace std;

struct Term {
    int coeff;
    int power;
};

void inputPoly(Term poly[], int &n) {
    cout << "** ENTER NUMBER OF NON-ZERO TERMS: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << " Enter Coefficient for Term " << i + 1 << ": ";
        cin >> poly[i].coeff;

        cout << " Enter Power for Term " << i + 1 << ": ";
        cin >> poly[i].power;
    }
}

void displayPoly(Term poly[], int n) {
    cout << "\n----------------------------------------------------------------" << endl;
    cout << "\t\t** Polynomial in Sparse Form **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    for (int i = 0; i < n; i++) {
        cout << poly[i].coeff << "x^" << poly[i].power;
        if (i < n - 1)
            cout << " + ";
    }
    cout << "\n\n----------------------------------------------------------------" << endl;
}

int main() {
    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** Sparse Polynomial Representation!! **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    int n;
    Term poly[20];   // Fixed-size array (max 20 terms)

    inputPoly(poly, n);
    displayPoly(poly, n);

    return 0;
}
