#include <iostream>
#include <vector>
using namespace std;

void reverse_string(vector<char>& s){   // FIXED: void
    int left = 0;
    int right = s.size() - 1;

    while(left < right){
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main(){
    int n;
    
    cout << "** Enter Size : ";
    cin >> n;

    vector<char> s(n);

    cout << "** Enter Array : " << endl;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    reverse_string(s);

    cout << "** Reverse order : " << endl;
    for(int i = 0; i < n; i++){
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}
