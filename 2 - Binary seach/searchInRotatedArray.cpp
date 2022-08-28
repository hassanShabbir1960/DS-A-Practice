#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int BinarySearch(vector<int>& nums, int start, int end, int target){
    int mid;
    while(start<=end){
        mid = start + (end-start)/2;
         if((nums[start] == nums[mid]) && (nums[end] == nums[mid])){
                start++;
                end--;
        }
        
        if (target == nums[mid]){
            return mid;
        }
        else if (target > nums[mid]){
            start = mid+1;
        }
        else if (target < nums[mid]){
            end = mid -1;
        }

    }
    return -1;

}

int findPivot(vector<int>& nums){
    int start = 0,mid, end = nums.size()-1;

    while (start < end){
        mid = start + (end-start)/2;

       

        if (nums[mid] >= nums[0]){
            start = mid+1;
        }
        

        else{
            end =mid;
        }
        

    }
    return start;

}

// int search(vector<int>& nums, int target) {
//     int pivot = findPivot(nums);
//     if (target >=nums[pivot] && target <=nums[nums.size()-1]){
//         return BinarySearch(nums,pivot,nums.size()-1,target );
//     }
//     else{
//         return BinarySearch(nums,0,pivot-1,target );
//     }

//     return -1;

// }

// int search(vector<int>& nums, int target) {
    
//     int start =0, end = nums.size()-1,mid;

//     if (nums[start] < nums[end]){
//         while (start <=end){
//         mid = start + (end-start)/2;
//         if (nums[mid] == target){
//             return mid;
//         }
//         else if ( target > nums[mid] ){
//             start =  mid +1;
//         }
//         else{
//             end = mid-1;
//         }
//         }
//     }
//     else{
    
//         while (start < end){
//             mid = start + (end-start)/2;
//             if (nums[mid] == target){
//                 return mid;
//             }
//             if (target > nums[nums.size()-1] && nums[mid] < target){
//                 end = mid;
//             }
//             if (nums[mid] >= target && nums[mid] >= nums[0] && target > nums[nums.size()-1]){
//                 end =mid;
//             }
//             else if (target >= nums[nums.size()-1]) {
//                 start =mid +1 ; 
//             }

//             if (target <= nums[mid] && target <= nums[nums.size()-1] && nums[mid] >nums[0]){
//                 start = mid +1;
//             }
//             else if ( target <= nums[mid] ){
//                 end =mid;
//             }
//             else{
//                 start =mid +1;
//             }
//         }
//     }

//     if (nums[start] == target) {
//         return start;
//     }
//     else{
//         return -1;
//     }
    
// }


// int search(vector<int>& nums, int target) {
    
//     int start =0, end = nums.size()-1,mid;
//     if (nums.size()==1){
//         if (nums[0] ==target){
//             return 0
//         }
//         else{
//             return -1;
//         }
//     }
//         while (start < end){
//             mid = start + (end-start)/2;
            
//             if ( target >=nums[0] && nums[mid] < nums[0]){
//                 end = mid;
//             }
//             else if (target < nums[0] && nums[mid] >nums[0] ){
//                 start =mid +1;
//             }
//             else if (nums[mid] > target) {
//                 end =mid ; 
//             }
//             else if (nums[mid] < target) {
//                 start =mid+1 ; 
//             }
//             else {
//                 return mid;
//             }

//         }  
        
//         return -1;
    
// }
 int search(vector<int>& nums, int target) 
    {
            int l = 0, r = nums.size()-1;
            while(l <= r)
            {
                int mid = (r - l)/2 + l;
                int comparator = nums[mid];
                // Checking if both target and nums[mid] are on same side.
                if((target < nums[0]) && (nums[mid] < nums[0]) || (target >= nums[0]) && (nums[mid] >= nums[0]))
                    comparator = nums[mid];
                else
                {
                    // Trying to figure out where nums[mid] is and making comparator as -INF or INF
                    if(target <nums[0])
                        comparator = -INFINITY;
                    else 
                        comparator = INFINITY;

                }
                if(target == comparator) return mid;
                if(target > comparator)            
                    l = mid+1;            
                else
                    r = mid-1;

            }
            return -1;
    }


int main(){

    vector<int> nums = {4,5,6,7,0,1,2};
    
    cout<<search(nums,2);
    //cout<<findPivot(nums);
    return 1;
    
}
