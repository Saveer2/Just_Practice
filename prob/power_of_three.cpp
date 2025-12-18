#include <iostream>
using namespace std;

bool powerofthree(int n) {
    if (n <= 0) {
        return false;
    }

    while (n % 3 == 0) {
        n /= 3;
    }

    return n == 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (powerofthree(n)) {
        cout << "True (Power of 3)" << endl;
    } else {
        cout << "False (Not a power of 3)" << endl;
    }

    return 0;
}
