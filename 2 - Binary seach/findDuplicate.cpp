
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


 int findDuplicate(vector<int>& nums) {
            
    int s = 1,mid,counter;
    int e = nums.size();       
    int ans = -1;

    while (s<=e){
        mid = s + (e-s)/2;

        counter =0;
        for (int i =0;i<nums.size();i++){
            if (nums[i] <= mid){
                counter++;
            }
        }
        if (counter>mid){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}


int main(){
    vector <int> arr = {1,1,4,2,3};
    cout<<findDuplicate(arr);

    return 0;

}
    
