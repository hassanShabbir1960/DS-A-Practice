#include <vector>
#include <iostream>
using namespace std;


void moveZeroes(vector<int>& nums) {
    
    int i =0;
    int j =0;
    while (j<nums.size()){
        if (nums[j] ==0){
            j++;
        }
        else{
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
    }

    for (auto i:nums){
        cout<<i<<endl;
    }


}


int main(){
    vector<int> nums = {0,1,0,3,12,0 };
    moveZeroes(nums);
}