

#include <bits/stdc++.h>
using namespace std;
#include <cmath> 



bool isPossible(vector<int>& nums, int threshold,int mid){
   
   int temp =0;

   for (int i =0;i<nums.size();i++){
        temp += ceil((double)nums[i]/(double)mid);
   }
   if (temp <=threshold){
    return true;
   }
   else{
    return false;
   }



}

int smallestDivisor(vector<int>& nums, int threshold) {
    int max = *max_element(nums.begin(), nums.end());
    int low = 1;
    int high = max;
    int mid;
    int sol =-1;

    while (low<=high){
        mid = low + (high -low)/2;

        if (isPossible(nums,threshold,mid)){
            sol = mid;
            high = mid -1;
        }
        else{
            low = mid +1;
        }
    }

    return sol;


}


int main(){

    vector<int> nums ={44,22,33,11,1};
    cout<<smallestDivisor(nums, 5);
    return 0;
}

