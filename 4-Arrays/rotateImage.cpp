
#include <vector>
#include <iostream>
using namespace std;


void display(vector<vector<int>> matrix){
 for (int i =0;i<matrix.size();i++){
        for (int j=0;j<matrix[0].size();j++){
            cout<< matrix[i][j] << " ";
    }
    cout<<endl;
}
}

void transpose(vector<vector<int>>& matrix){
    for (int i =0;i<matrix.size();i++){
        for (int j=0;j<matrix[0].size();j++){
            if (i!=j && i<j){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
}


void rotate(vector<vector<int>>& matrix) {
    int sizeIndex = matrix[0].size() -1;
    transpose(matrix);
    for (int i =0;i<matrix.size();i++){
        for (int j=0;j<matrix[0].size()/2;j++){
            swap(matrix[i][j], matrix[i][sizeIndex-j] );
        }
    }   
      
}



int main(){
    vector<vector<int>> arr = { {5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    rotate(arr);

}