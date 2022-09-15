
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



bool isPossible(vector<int>& bloomDay, int m, int k,int days){

    int counter = 0;
    int pairCount=0;

    for (int i =0;i<bloomDay.size();i++){

        if (bloomDay[i] - days  <=0){
            pairCount++;
        }
        else{
            pairCount = 0;
        }
        if (pairCount == k){
            counter++;
            pairCount =0;
        }
        if (counter == m){
            return true;
        }
    }
    return false;

}

int minDays(vector<int>& bloomDay, int m, int k) {

    if (bloomDay.size() < m*k ) return -1;
    int s = 0,mid;
    int e = *max_element(bloomDay.begin(), bloomDay.end());       
    int ans = -1;

    while (s<=e){
        mid = s + (e-s)/2;
        
        if (isPossible(bloomDay,m,k,mid)){
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
    vector <int> arr = {1,10,3,10,2};
    cout<<minDays(arr, 3, 1);

    return 0;

}
    
