

#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <cmath> 

#include <bits/stdc++.h> 



// bool isPossible(vector<int> &arr,int mid){
   


// }


long long threeWaySplit(int n, vector<int> arr){
    // Write your code here.
    int si = 0 ;
    int ei =arr.size()-1;
    long long ssum = arr[si];
    long long esum = arr[ei];
    long long max = 0;

    while(si < ei){

        if (ssum > esum){
            ei--;
            esum += arr[ei];
        }
        else if (ssum < esum){
            si++;
            ssum += arr[si];
        }
        else{
            max = ssum;
            //cout<<max;
            ei--;
            si++;
            esum += arr[ei];
            ssum += arr[si];

        }
    }
    if (si>ei && max==0){
        return 0;
    }
    return max;
  

}


bool isPossible(int n, vector<vector<int>> &arr, int B,int mid){
    int w_sum =0;
    for (int i=0;i<n;i++){
        int c_sum =0;
        for (int j= 0 ; j < arr[i].size();j++){
            c_sum += arr[i][j];
        }
        if (c_sum >mid){
            return false;
        }
        w_sum+=c_sum;
     
    }
    if (w_sum <=B){
        return true;
    }
    else{
        return false;
    }
}

#include <bits/stdc++.h> 
int findMaxX(int n, vector<vector<int>> &arr, int B){
    //Write your code here.
   int s =0;
   int e =B;
   int mid;
   int sol =-1;
    
    while (s <= e){
        mid = s + (e-s)/2;
        if (isPossible(n,arr,B,mid)){
            e = mid-1;
            sol = mid;
        }
        else{
            s = mid +1;
        }
    }
    return sol;
    
}



int main(){
    vector<vector<int>> arr = {{1,2,3},{4,2,3},{1,10,2}};
    cout<<findMaxX(3,arr,20);
    // vector<int> arr = {2 ,3 ,1 ,5 };
    // cout<<threeWaySplit(arr.size()-1,arr);

}