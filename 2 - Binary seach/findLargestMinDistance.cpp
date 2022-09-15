#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool isPossible(vector<int> &boards,int mid, int k){
    int minSum =0;
    int painterCount =1;
    for (int i =0;i<boards.size();i++){
        if (minSum + boards[i] <=mid){
            minSum += boards[i];
        }
        else{
            painterCount++;
            if (painterCount > k || boards[i] > mid){
                return false;
            }
            minSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k){

    int end =0;
    int start =0,mid;
    int minSol =-1;
    bool first =false;

    for (int i =0;i<boards.size();i++){
        end += boards[i];
    }

    while (start <= end){
     
        mid = start + (end-start)/2;

        if (isPossible(boards,mid,k)){
            end = mid-1;
            minSol = mid;
        
        }
        else{
            start =mid +1;
        }
        

    }
    return minSol;
    

    //    Write your code here.
}


int main(){
    //cout<< fibsum(3);
    vector<int> nums ={10,20,30,40};
    cout<<findLargestMinDistance(nums, 2);

    
}

