#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){
    //Write your code here
    vector<int> res;    
    for (int i=0;i<mCols;i++){
        if (i%2==0){
            for (int j = 0;j<nRows;j++){
                
                res.push_back(arr[j][i]);
            }
        }
        else{
            for (int j = nRows-1;j>=0;j--){
                
                res.push_back(arr[j][i]);
            }
        }
    }
    return res;
}


int main(){
    vector<vector<int>> arr = { {1,2,3}, {4,5,6}, {7,8,9}};
    wavePrint(arr,3,3);

}