

#include <bits/stdc++.h>
using namespace std;
#include <cmath> 



bool isPossible(vector<int> &stalls, int k,int mid){
    int cowCount =1;
    int lastPosition = stalls[0];

    for (int i =0;i<stalls.size();i++){
        int temp = stalls[i] - lastPosition;

        if (temp >=mid){
            cowCount++;
            if (cowCount==k){
                return true;
            }
            lastPosition =stalls[i];
        }
    }
    return false;


}
int aggressiveCows(vector<int> &stalls, int k){
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int start = stalls[0];
    int end = stalls[stalls.size()-1] - stalls[0],mid;
    int ans =-1;


    while (start <= end){
        mid = start + (end -start)/2;

        if (isPossible(stalls, k, mid)){
            ans =mid;
            start= mid+1;

        }
        else{
            end = mid-1;

        }


    }
    return ans;

}

int main(){

    vector<int> stalls ={0 ,4 ,3 ,7 ,10 ,9};
    cout<<aggressiveCows(stalls, 3);
    return 0;
}

