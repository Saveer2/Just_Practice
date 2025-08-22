#include <iostream>
using namespace std;

int evaluatePolynomial(int coef[], int degree, int x) {
    int result = 0;
    for(int i = 0; i <= degree; i++) {
        int term = 1;
        for(int j = 0; j < i; j++) {
            term = term * x;   
        }
        result = result + coef[i] * term;
    }
    return result;
}

int main() {
    int degree;

    cout << "----------------------------------------" << endl;
    cout << "\t** Polynomial Evaluation!! **" << endl;
    cout << "----------------------------------------\n" << endl;

    cout << "Enter degree of polynomial: ";
    cin >> degree;

    int coef[100];
    cout << "Enter coefficients from constant term \nto highest degree: \n\n";
    for(int i = 0; i <= degree; i++) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> coef[i];
    }

    int x;
    cout << "Enter value of x: ";
    cin >> x;

    int ans = evaluatePolynomial(coef, degree, x);
    cout << "Polynomial value = " << ans << endl;
    cout << "----------------------------------------\n" << endl;

    return 0;
}
