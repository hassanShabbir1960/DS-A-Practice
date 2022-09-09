#include <bits/stdc++.h>
using namespace std;



bool isPossible(vector<int> arr,int mid,int m){
    int sum =0;
    int stuCount =1;


    for (int i=0;i<arr.size();i++){

        if (sum + arr[i] <= mid){
            sum+=arr[i];
        }
        else{
            stuCount+=1;
            if (stuCount > m || arr[i] > mid){
                return false;
            }
            
            sum = arr[i];

        }
    }
   return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    int end =0;
    int start =0,mid;
    int minSol =-1;
    bool first =false;

    for (int i =0;i<n;i++){
        end += arr[i];
    }

    while (start <= end){
     
        mid = start + (end-start)/2;

        if (isPossible(arr,mid,m)){
            end = mid-1;
            minSol = mid;
        
        }
        else{
            start =mid +1;
        }
        

    }
    return minSol;
    

}



int main(){

    vector<int> arr = {25 ,46 ,28 ,49, 24};
    cout<<allocateBooks(arr,5, 4);


}


