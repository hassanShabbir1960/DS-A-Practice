
#include <vector>
#include <iostream>
using namespace std;



bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int i =0 ;
    int j = matrix[0].size()-1;

    int rows = matrix.size();
    int cols = matrix[0].size();

    while (i<rows && j>=0){

        if (matrix[i][j] == target){
            return 1;
        }
        else if (matrix[i][j] > target) {
            j--;
        }
        else{
            i++;
        }

    }
    return 0;

}


int main(){

    vector<vector<int>> arr = { {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}}};
    cout<<searchMatrix(arr,5);

}