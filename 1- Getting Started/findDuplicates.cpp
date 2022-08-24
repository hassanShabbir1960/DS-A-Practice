#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    unordered_map <int,int> m;
    vector<int> result;
    
     for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
            if (m[nums[i]] ==2){
                result.push_back(nums[i]);
            }
    }
    return result;
    
   
}




int main(){
    
    vector<int> nums = {1};
    vector<int> res = findDuplicates(nums);
    cout<<res[0];
    cout<<res[1];
    

}