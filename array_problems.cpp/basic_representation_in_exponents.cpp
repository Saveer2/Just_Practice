#include <iostream>
using namespace std;

void InputPol(int poly[], int n) {
    cout << "\n* Enter Coefficients and Powers Alternately : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> poly[i];
    }
}

void DisplayPol(int poly[], int n) {
    cout << "\n** Polynomial in Standard Form : " << endl;
    for (int i = 0; i < n; i += 2) {
        cout << poly[i] << "x^" << poly[i + 1];
        if (i < n - 2) {
            cout << " + ";
        }
    }
    cout << endl;
}

int main() {
    int a;

    cout << "----------------------------------------------------------------" << endl;
    cout << "\t\t** Polynomial Representation!! **" << endl;
    cout << "----------------------------------------------------------------\n" << endl;

    cout << "** ENTER SIZE OF ARRAY (even number, coeff & power): ";
    cin >> a;

    int poly[a];  
    
    InputPol(poly, a);
    DisplayPol(poly, a);

    cout << "----------------------------------------------------------------\n" << endl;
    return 0;
}
