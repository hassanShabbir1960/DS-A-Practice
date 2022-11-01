
    // if (rows==1){
    //     for (int j =0;j<cols;j++){
    //         res.push_back(matrix[0][j]);

    //     }
    //     return res;
    // }
    // while (j<cols){
    //     cout<<matrix[i][j]<<" ";
    //     res.push_back(matrix[i][j]);
    //     j++;
    // }
    // j--;
    // i++;
    // if (( i<0 || i>=rows ) || (j<0 || j>=cols)) return res;


    // while (i<rows){
    //     res.push_back(matrix[i][j]);
    //     cout<<matrix[i][j]<<" ";
    //     i++;
    // }
    // i--;
    // j--;
    // if (( i<0 || i>=rows ) || (j<0 || j>=cols)) return res;
    // //cout<<endl<<i<<j;
    // while (j>=0){
    //     res.push_back(matrix[i][j]);
    //     cout<<matrix[i][j]<<" ";
    //     j--;
    // }
    // j++;
    // i--;
    // if (i==0 && j==0) return res;
    // if (( i<0 || i>=rows ) || (j<0 || j>=cols)) return res;
    // while (i>0){
    //     res.push_back(matrix[i][j]);
    //     cout<<matrix[i][j]<<" ";
    //     i--;
    // }
    // i++;
    // j++;
    // if (( i<0 || i>=rows ) || (j<0 || j>=cols)) return res;
    // while (j<cols-1){

    //     res.push_back(matrix[i][j]);
    //     cout<<matrix[i][j]<<" ";
    //     j++;
    // }
    // // cout<<endl<<i<<j;


    //     // while (j<cols-1){
    //     //     cout<<matrix[i][j]<<" ";
    //     //     j++;
    //     // }

#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;


vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int total = rows*cols;

    
    int sr=0;
    int sc=0;
    int er=rows-1;
    int ec=cols-1;
    vector<int>  res;

    int i=0,j=0,count=0;

     while (count<total){


        //// print starting row

        for (int i= sc;i<=ec && count<total;i++){
            cout<<matrix[sr][i]<<" ";
            res.push_back(matrix[sr][i]);
            count++;
        }
        sr++;

        // Ending column
        for (int i= sr;i<=er && count<total;i++){
            cout<<matrix[i][ec]<<" ";
            res.push_back(matrix[i][ec]);
            
            count++;
        }
        ec--;

        // ending row

        for (int i= ec;i>=sc && count<total;i--){
            cout<<matrix[er][i]<<" ";
            res.push_back(matrix[er][i]);
            count++;
        }
        er--;

        for (int i= er;i>=sr && count<total;i--){
            cout<<matrix[i][sc]<<" ";
            res.push_back(matrix[i][sc]);
            count++;
        }
        sc++;

    }
    return res;
   

   
 
}

int main(){
    vector<vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9}};
    spiralOrder(matrix);
    
}

