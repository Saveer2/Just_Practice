#include <iostream>
using namespace std;

int findDegree(int coeff[], int n) {
    for (int i = n; i >= 0; i--) {
        if (coeff[i] != 0) {
            return i;   
        }
    }
    return -1; 
}

int main() {
    int n;  

    cout << "--------------------------------------------" << endl;
    cout << "\t** Polynomial Degree Find!! **" << endl;
    cout << "--------------------------------------------\n" << endl;

    cout << "Enter the highest degree of polynomial: ";
    cin >> n;

    int coeff[n+1];  

    cout << "Enter coefficients from highest degree to \nconstant term : \n" << endl;
    for(int i = n; i >= 0; i--) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> coeff[i];
    }

    int degree = findDegree(coeff, n);

    if(degree == -1){
        cout << "The polynomial is zero polynomial, \ndegree is undefined." << endl;
    }else{
        cout << "Degree = " << degree << endl;
    }
    cout << "--------------------------------------------\n" << endl;
    return 0;
}
