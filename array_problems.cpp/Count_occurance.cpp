#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "------------------------------------------" << endl;
    cout << "\t ** Count Occurrence!! **" << endl;
    cout << "------------------------------------------\n" << endl;

    cout << "** ENTER SIZE OF ARRAY : ";
    cin >> n;

    int arr[n];  

    cout << "\n* Enter " << n << " Elements : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "\n* Enter element to count: ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    cout << "\n------------------------------------------" << endl;
    cout << "Element " << x << " occurs " << count << " times." << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
