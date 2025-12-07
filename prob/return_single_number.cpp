#include <iostream>
#include <vector>
using namespace std;

int singlenumber(vector<int>& nums){
    int ans = 0;

    for(int val : nums){
        ans = ans^val;
    }
    return ans;
}

int main(){
    int n;
    cout<<"** Enter size of array : ";
    cin>>n;

    vector<int> nums(n);

    cout<<"** Enter elements of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int result = singlenumber(nums);

    cout<<"** Single Number which dosen't have duplicates : "<<result<<endl;
}