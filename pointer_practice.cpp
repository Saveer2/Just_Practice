#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int *ptr = &num;

    cout << "Your Value: " << num << endl; // Prints the value of num
    cout << "Your Value Address: " << &num << endl; // Prints the address of num
    cout << "Pointer Value (Address stored in ptr): " << ptr << endl; // Prints the same address as &num
    cout << "Value Pointed by ptr: " << *ptr << endl; // Prints value stored at that address

    return 0;
}
