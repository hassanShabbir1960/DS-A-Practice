#include <vector>
#include <iostream>
using namespace std;



void right_shift(vector<int> &nums){
    int prev = nums[0];
    int curr;
    for (int i =1;i<nums.size();i++){
        curr = nums[i];
        nums[i] = prev;
        prev = curr;
    }
}

void rotate(vector<int>& nums, int k) {


    // Method 1 :  Using a temp array
    // vector<int> temp(nums.size());

    // for (int i =k;i<nums.size();i++){
    //     swap(nums[i],nums[(i+k)% nums.size() ]);
    //     // temp[ (i+k)% nums.size() ] = nums[i];
    // }    
    // nums = temp;
    
    // Method 2: Using right shift

    for (int i =0;i<k;i++){
        int last = nums[nums.size()-1];
        right_shift(nums);
        nums[0] = last;
    }

    for (int i:nums){
        cout<<i<<endl;
    }


}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
        
    rotate(nums,3);
}