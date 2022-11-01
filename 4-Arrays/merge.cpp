#include <iostream>
#include <vector>
using namespace std;



// void shift(vector<int> &arr, int index){
//     // This function will shift the elements to the right & discarding the right element
//     for (int i = arr.size()-1;i>index ;i--){
//         arr[i] = arr[i-1];
//     }
// }


// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     vector<int> result;
//     int t_size = m+n;
//     int i=0;
//     int j=0;
//     if (n!=0){
//     for (int k =0;k<nums1.size();k++){
//         if (nums2[j] < nums1[i] && j <n){
//             shift(nums1,i);
//             nums1[i] = nums2[j];
//             j++;
//         }
//         else{
//             if (nums1[i]==0){
//                 break;
//             }
//             else{            
//             i++;
//             cout<<i;
//             } 
//         }


//     }
//     cout<<"j"<<j<<endl;
//     for (int l = j+1;l<n;l++){
//         nums1[i++] = nums2[l];
//     }
//     cout<<"dsssssssssssssss"<<endl;
//     for (auto num:nums1){
//         cout<<num<<endl;
//     }
//     }
// }

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int maxPtr1 = m-1;
    int maxPtr2 = n-1;
    int lastPtr = m+n-1;

    if (n==0) return;
    if (m==0){
        for (int i =0;i<n;i++){
            nums1[i] = nums2[i];
        }
        return;
    }
    while (maxPtr1 >=0 && maxPtr2 >=0){
        if (nums2[maxPtr2] >= nums1[maxPtr1]){
            nums1[lastPtr] = nums2[maxPtr2];
            maxPtr2--;
            lastPtr--;
        }   
        else{
            nums1[lastPtr] = nums1[maxPtr1];
            maxPtr1--;
            lastPtr--;
        }
    }
     while(maxPtr1>=0)
            nums1[lastPtr--]=nums1[maxPtr1--];
    while(maxPtr2>=0)
        nums1[lastPtr--]=nums2[maxPtr2--];
        
    for (auto num:nums1){
        cout<<num<<endl;
    }
   
}





int main(){
    vector<int> arr1 = {2,0};
    vector<int> arr2 = {1};

    //shift(arr1,0);
    merge(arr1,1,arr2,1);
}
