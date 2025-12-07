#include <iostream>
#include <vector>
using namespace std;

int removeduplicates(vector<int>& nums){
    if(nums.size() == 0){
        return 0;
    }

    int i=1;

    for(int j=1;j<nums.size();j++){
        if(nums[j] != nums[j-1]){
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main(){

    int n;
    cout<<"Enter Size of array: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"**Enter your array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int result = removeduplicates(nums);

    cout<<"** After removing Duplicates : "<<endl;
    for(int i=0;i<result;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}