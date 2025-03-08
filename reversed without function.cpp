#include <iostream>  // Include the header file for input and output operations

using namespace std;  // Use the standard namespace so we don't need to prefix with 'std::'

int main() {
    int n;  // Declare an integer variable to store the number of elements in the array
    cin >> n;  // Take user input for the number of elements in the array

    int arr[n];  // Declare an array 'arr' of size 'n' to store the elements

    // Loop to take 'n' elements as input and store them in the array
    for(int i = 0; i < n; i++) {  
        cin >> arr[i];  // Read each element and store it in the array at index 'i'
    }

    // Loop to print the elements in reverse order
    for(int i = n - 1; i >= 0; i--) {  
        cout << arr[i];  // Print the element at index 'i' of the array
        if(i != 0) {  // If 'i' is not 0 (i.e., not the last element), print a space
            cout << " ";  
        }
    }

    cout << endl;  // Print a newline after all elements have been printed

    return 0;  // Return 0 to indicate the successful execution of the program
}

