#include <vector>
#include <iostream>
using namespace std;

bool check(vector<int>& nums) {
    int count =0;
    for (int i=0;i<nums.size()-1;i++){
        if ((nums[i] > nums[i+1])){
            count++;
        }
    }
    if (nums[nums.size()-1] > nums[0]){
        count++;
    }

    if (count >1) return false;
    else return true;
        
}


int main(){
    vector<int> nums = {1,2,3};
        
    cout<<check(nums);
}

