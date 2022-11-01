
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
vector<vector<int>> arr = { {5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
cout<<searchMatrix(arr,1);

}