#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int find_index(vector<int>& nums, int target, bool left){
    int index=-1;
    int start = 0;
    int end = nums.size()-1;

    while (start<=end){
        int mid = (start +end) / 2;

        if (nums[mid] == target){
            index = mid;
            if (left ==true){
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
        else if ( target > nums[mid] ){
            start = mid+1;
        }
        else{
            end = mid -1;
        }

    }
    return index;

}
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res;
    res.push_back(find_index(nums,target,true));
    res.push_back(find_index(nums,target,false));
    return res;
      
}


int main(){
    
    vector<int> nums1 = {1 ,2 ,2 ,2 ,2,3 ,4};
    
    vector<int> res = searchRange(nums1,2);
    cout<<res[0];
    cout<<res[1];
    

}