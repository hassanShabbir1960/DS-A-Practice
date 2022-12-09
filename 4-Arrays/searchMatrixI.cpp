
#include <vector>
#include <iostream>
using namespace std;



bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int start =0 ;
        int end = (matrix.size() *matrix[0].size() )- 1 ;
        
        int mid = start + (end -start)/2;
        
        while (start<=end){
            int ele = matrix[mid/matrix[0].size()][mid%matrix[0].size()];
            if (ele==target){
                return true;
            }
            else if(ele <target){
                start =mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end -start)/2;
        }
    return 0;
    }


int main(){
    

vector<vector<int>> arr = { {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}}};
cout<<searchMatrix(arr,1);

}