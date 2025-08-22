#include <iostream>
using namespace std;

// Function to subtract two polynomials
void subtractPolynomial(int P1[], int P2[], int result[], int degree) {
    for (int i = 0; i <= degree; i++) {
        result[i] = P1[i] - P2[i]; 
    }
}

// Function to display polynomial
void displayPolynomial(int poly[], int degree) {
    bool first = true;
    for (int i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (!first && poly[i] > 0) cout << " + ";
            if (poly[i] < 0) cout << " - ";
            cout << (poly[i] < 0 ? -poly[i] : poly[i]);
            if (i > 0) cout << "x^" << i;
            first = false;
        }
    }
    if (first) cout << "0";  // if polynomial is empty
    cout << endl;
}

int main() {
    int degree;

    cout << "----------------------------------------" << endl;
    cout << "\t** Polynomial Subtraction!! **" << endl;
    cout << "----------------------------------------\n" << endl;

    cout << "** ENTER MAX DEGREE OF POLYNOMIAL: ";
    cin >> degree;

    // allocate arrays dynamically
    int *P1 = new int[degree + 1]();
    int *P2 = new int[degree + 1]();
    int *result = new int[degree + 1]();

    cout << "\n* Enter coefficients for P1 \n(from degree " << degree << " to 0):\n";
    for (int i = degree; i >= 0; i--) {
        cout << "Coefficient of x^" << i << " : ";
        cin >> P1[i];
    }

    cout << "\n* Enter coefficients for P2 \n(from degree " << degree << " to 0):\n";
    for (int i = degree; i >= 0; i--) {
        cout << "Coefficient of x^" << i << " : ";
        cin >> P2[i];
    }

    cout << "\nP1: ";
    displayPolynomial(P1, degree);

    cout << "P2: ";
    displayPolynomial(P2, degree);

    subtractPolynomial(P1, P2, result, degree);

    cout << "\n** Result (P1 - P2): " << endl;
    displayPolynomial(result, degree);

    cout << "----------------------------------------\n" << endl;

    // free memory
    delete[] P1;
    delete[] P2;
    delete[] result;

    return 0;
}
