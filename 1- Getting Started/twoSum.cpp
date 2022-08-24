#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    unordered_map<int, int> mapping;

    for(int i=0;i<nums.size();i++){
        if (mapping.find(target-nums[i]) != mapping.end()) {
            res.push_back(mapping[target-nums[i]]);
            res.push_back(i);
            cout<<mapping[nums[i]]<<i<<endl;
            
        }
        mapping[nums[i]] = i;
    }  
    return res;
}


int main(){
    vector<int> nums ={3,2,4};
    twoSum(nums,6);
}