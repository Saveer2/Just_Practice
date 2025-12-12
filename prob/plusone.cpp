#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();

    for(int i = n - 1; i >= 0; i--) {
        if(digits[i] < 9) {
            digits[i]++;      // just increment and return
            return digits;
        }
        digits[i] = 0;         // set to 0 and continue carry
    }

    // If all digits were 9 (e.g. 999 -> 1000)
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits = {1, 2, 3};
    vector<int> result = plusOne(digits);

    for(int x : result) {
        cout << x << " ";
    }
    return 0;
}
