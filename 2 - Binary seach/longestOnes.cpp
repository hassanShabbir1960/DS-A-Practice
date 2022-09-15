
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int longestOnes(vector<int>& nums, int k) {
    
    int tempk=0;
    int seqLen =0;
    int ans =0;
    

    int i =0;
    int j =0;

    while(j<nums.size()){
        if (nums[j] ==1){
            j++;
        }
        else if (nums[j] ==0 && tempk<k){
            j++;   
            tempk++;         
        }
        else{
            // Need to remove zeros
            while(tempk>=k){
                if (nums[i]==0){
                    tempk--;
                }
                i++;
            }
        }
        seqLen = max(seqLen,j-i);
    }
    return seqLen;
}


int main(){
    vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    cout<<longestOnes(nums,3);



}