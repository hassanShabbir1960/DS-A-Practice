#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr , int m){
	// Write your code here.
    int start = 0, end = arr.size()-1;

    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (auto i:arr){
        cout<<i<<endl;
    }

}


int main(){
    vector<int> arr = {1,2,3,4};
    reverseArray(arr,5);
}
