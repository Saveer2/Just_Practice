#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Array for English words of numbers 1 through 9
    const string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // Iterate from a to b
    for (int i = a; i <= b; ++i) {
        if (i >= 1 && i <= 9) {
            // Print the English word for numbers 1 to 9
            cout << words[i - 1] << endl;
        } else if (i % 2 == 0) {
            // Print "even" if the number is even and greater than 9
            cout << "even" << endl;
        } else {
            // Print "odd" if the number is odd and greater than 9
            cout << "odd" << endl;
        }
    }

    return 0;
}


