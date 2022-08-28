
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



// int pivotIndex(vector<int>& nums) {

//     for (int i =0;i<nums.size();i++){

//         // Finding left side sum
        
//         int lsum =0;
//         for (int j= 0 ;j<i;j++){
//             lsum+=nums[j];
//         }
//         // Finding right side sum
        
//         int rsum =0;
//         for (int j= i+1 ;j<nums.size();j++){
//             rsum+=nums[j];
//         }

//         if (lsum==rsum){
//             return i;
//         }


//     }
//     return -1;

// }


// int pivotIndex(vector<int>& nums) {
//     int start =0, end = nums.size()-1,mid;
//     mid = ( start+end ) /2;

//     while (mid >=0 || mid > nums.size()-1 ){
        
//         // Finding left side sum
        
//         int lsum =0;
//         for (int j= 0 ;j<mid;j++){
//             lsum+=nums[j];
//         }
//         // Finding right side sum
        
//         int rsum =0;
//         for (int j= mid+1 ;j<nums.size();j++){
//             rsum+=nums[j];
//         }

//         if (lsum==rsum){
//             return mid;
//         }
//         if (lsum > rsum){
//             mid--;
//         }
//         else{
//             mid++;
//         }


//     }
//     return -1;

// }


int pivotIndex(vector<int>& nums) {
    int fullsum =0;

    for (int i=0;i<nums.size();i++){
       fullsum+=nums[i];

    }

    int leftsum =0;
    for (int i=0;i<nums.size();i++){
        int rightsum =fullsum - leftsum - nums[i];
        if ( rightsum == leftsum){
            return i;
        }
        leftsum+=nums[i];
    }
    return -1;

}



int main(){

    vector<int> nums1 = {1,7,3,6,5,6};
    
    cout<<pivotIndex(nums1);
    return 1;
    
}