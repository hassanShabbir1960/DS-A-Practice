   

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size()-1;

    while(start<=end){
        int mid = (start + end ) /2;

        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;

        }
        if (arr[mid] < arr[mid+1]){
            start = mid+1;

        }
        else{
            end = mid -1;
        }

    }  
    return -1;

}



int main(){
    
    vector<int> nums1 = {3,5,3,2,0};
    
    cout<<peakIndexInMountainArray(nums1);
   

}
