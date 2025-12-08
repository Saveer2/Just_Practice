#include <iostream>
#include <vector>
using namespace std;

int remove_elements(vector<int>& nums, int val){
    int k=0;

    for(int i=0; i<nums.size();i++){
        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main(){
    int val;
    int size;

    do{
        cout<<"\n** Enter size of array : ";
        cin>>size;

        vector<int> nums(size);

        cout<<"** Enter elemets of array : "<<endl;
        for(int i=0;i<size;i++){
            cin>>nums[i];
        }

        cout<<"** Enter the element which you want to remove : ";
        cin>>val;

        int k=remove_elements(nums,val);

        cout<<"** Your updated array is : "<<endl;
        for(int i=0;i<k;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }while(1);

    return 0;

}