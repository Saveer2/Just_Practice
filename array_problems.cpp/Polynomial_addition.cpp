#include <iostream>
using namespace std;

struct Term {
    int coeff;
    int pow;
};

void displayPoly(Term poly[], int n) {
    for (int i = 0; i < n; i++) {
        cout << poly[i].coeff << "x^" << poly[i].pow;
        if (i != n - 1) cout << " + ";
    }
    cout << endl;
}

int addPoly(Term P1[], int n1, Term P2[], int n2, Term P3[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (P1[i].pow == P2[j].pow) {
            P3[k].coeff = P1[i].coeff + P2[j].coeff;
            P3[k].pow = P1[i].pow;
            i++; j++; k++;
        }
        else if (P1[i].pow > P2[j].pow) {
            P3[k] = P1[i];
            i++; k++;
        }
        else {
            P3[k] = P2[j];
            j++; k++;
        }
    }

    while (i < n1) P3[k++] = P1[i++];
    while (j < n2) P3[k++] = P2[j++];
    return k; 
}

int main() {
    int n1, n2;

    cout << "----------------------------------------------------------" << endl;
    cout << "\t\t** Polynomial Addition!! **" << endl;
    cout << "----------------------------------------------------------\n" << endl;

    cout << "** ENTER NUMBER OF TERMS FOR P1: ";
    cin >> n1;
    Term P1[n1];
    cout << "\n* Enter Coefficient and Power for each term \n(in descending power): " << endl;
    for (int i = 0; i < n1; i++) {
        cin >> P1[i].coeff >> P1[i].pow;
    }

    cout << "\n** ENTER NUMBER OF TERMS FOR P2: ";
    cin >> n2;
    Term P2[n2];
    cout << "\n* Enter Coefficient and Power for each term \n(in descending power): " << endl;
    for (int i = 0; i < n2; i++) {
        cin >> P2[i].coeff >> P2[i].pow;
    }

    Term P3[20]; 
    int n3 = addPoly(P1, n1, P2, n2, P3);

    cout << "\n----------------------------------------------------------" << endl;
    cout << "P1: ";
    displayPoly(P1, n1);

    cout << "P2: ";
    displayPoly(P2, n2);

    cout << "Sum: ";
    displayPoly(P3, n3);
    cout << "----------------------------------------------------------\n" << endl;

    return 0;
}
