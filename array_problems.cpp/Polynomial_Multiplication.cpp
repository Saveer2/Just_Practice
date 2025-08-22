#include <iostream>
using namespace std;

void multiplyPolynomial(int A[], int degA, int B[], int degB, int result[]) {
    for (int i = 0; i <= degA + degB; i++) {
        result[i] = 0;
    }

    for (int i = 0; i <= degA; i++) {
        for (int j = 0; j <= degB; j++) {
            result[i + j] += A[i] * B[j];
        }
    }
}

int main() {
    int degA, degB;

    cout << "------------------------------------------------" << endl;
    cout << "\t** Polynomial Multiplication!! **" << endl;
    cout << "------------------------------------------------\n" << endl;

    cout << "Enter degree of first polynomial: ";
    cin >> degA;
    int A[degA + 1];
    cout << "Enter coefficients of first polynomial \n(from constant term to highest degree): \n"<<endl;
    for (int i = 0; i <= degA; i++) {
        cin >> A[i];
    }

    cout << "Enter degree of second polynomial: ";
    cin >> degB;
    int B[degB + 1];
    cout << "Enter coefficients of second polynomial \n(from constant term to highest degree): \n"<<endl;
    for (int i = 0; i <= degB; i++) {
        cin >> B[i];
    }

    int result[degA + degB + 1];
    multiplyPolynomial(A, degA, B, degB, result);

    cout << "Resultant polynomial after multiplication: \n"<<endl;
    for (int i = degA + degB; i >= 0; i--) {
        if (result[i] != 0) {
            cout << result[i];
            if (i > 0) cout << "x^" << i << " ";
            if (i > 0 && result[i - 1] >= 0) cout << "+ ";
        }
    }
    cout << endl;
    cout << "------------------------------------------------\n" << endl;

    return 0;
}
