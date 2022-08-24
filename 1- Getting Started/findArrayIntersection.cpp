#include <iostream>
#include <bits/stdc++.h>

using namespace std;


vector<int> findArrayIntersection(vector<int> &nums1, int n, vector<int> &nums2, int m){
	// Write your code here.
    vector<int> res;
    int alreadychecked = -999;
    int i=0;
    int j = 0;

    while (i <n && j <m){

        if (nums1[i] == nums2[j]){
            if (nums1[i]!=alreadychecked){
                res.push_back(nums1[i]);
                alreadychecked =nums1[i]; 
            }
            i++;
            j++;
        }
        else if (nums1[i] <nums2[j])
        {
            i++;
        }
        else if (nums2[j] <nums1[i])
        {
            j++;
        }
        
    }
    return res;
}



int main(){
    
    vector<int> nums1 = {1 ,2 ,2 ,2 ,3 ,4};
    vector<int> nums2 = {2 ,2 ,3 ,3};
    
    vector<int> res = findArrayIntersection(nums1,6,nums2,4);
    cout<<res[0];

}