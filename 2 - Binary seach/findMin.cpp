#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int findPivot(vector<int>& nums){
    int s = 0 ;
    int e = nums.size()-1;
    int mid;
    while (s<e){
        mid = s+ (e-s)/2;
        if (nums[mid] > nums[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }
    }
    return e;

}




int findMin(vector<int>& nums) {
    /// Given that array is in ascending order
    // Checking if it is rotated or not

    // if (nums[nums.size()-1] > nums[0] || nums.size()==1){
    //     return nums[0];
    // }
    // else if (nums.size()==2 ){
    //     return min(nums[0],nums[1]);
    // }
    // else{
    //     return nums[findPivot(nums)];
    // }

        int low =0;
        int high = nums.size()-1;
        if (nums[low]<nums[high]) return nums[low];
        
        while (low <=high){
            int mid = low + (high-low)/2;
            if (nums[mid] < nums[high]){
                high =mid;
            }
            else if(nums[mid] > nums[high]){
                low =mid +1;
            }
            else{
                high--;
            }
        }
    return nums[low];


}




int main(){
    vector<int> nums ={10,1,10,10,10};
    cout<<findMin(nums);
}