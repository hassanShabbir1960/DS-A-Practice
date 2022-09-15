
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> &nums,int k , int mid){
    int remainings = 0;
    for (int i=0;i<nums.size();i++){
        if (nums[i] > mid){
            remainings+= nums[i]-mid;
        }
        if (remainings >= k){
            return true;
        }
    }
    return false;

}



int Eko(vector<int>& nums, int k ){
    int l =1;
    int h = *max_element(nums.begin(), nums.end());
    int mid ;
    int ans =-1;


    while(l<=h){
        mid = l + (h-l)/2;

        if (isPossible(nums, k, mid)){
            ans = mid;
            l = mid+1;
        }
        else{
            h = mid -1;
        }
    }
    return ans;
}


int main(){
    vector<int> nums ={4 ,42 ,40 ,26, 46};
    cout<<Eko(nums,20);
}
