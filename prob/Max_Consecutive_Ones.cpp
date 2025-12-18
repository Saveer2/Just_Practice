#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxones(vector<int>& nums) {
    int current = 0;
    int maxCount = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            current++;
            maxCount = max(maxCount, current);
        } else {
            current = 0;
        }
    }
    return maxCount;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Max consecutive ones: " << maxones(nums) << endl;
    return 0;
}
