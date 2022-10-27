#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void print(vector<int> &arr,int n){
    for (int i =0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

}
// void insertionSort(vector<int> &arr, int n){
    
//     for (int i =1;i<= n ;i++){
//         int temp = arr[i];
//         int j = i-1;
//         for (;j>=0;j--){

//             if (arr[j] > temp){
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//         //print(arr,n);
//     }
// }


void insertionSort(vector<int> &arr, int n){
    // Using while loops

    int i =1,j,temp;
    while(i<=n){
        int temp = arr[i];
        j = i-1;
        while(j>=0){
            if (arr[j] > arr[i]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;

    }   
    print(arr,n);

    // for (int i =1;i<= n ;i++){
    //     int temp = arr[i];
    //     int j = i-1;
    //     for (;j>=0;j--){

    //         if (arr[j] > temp){
    //             arr[j+1] = arr[j];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     arr[j+1] = temp;
    //     //print(arr,n);
    // }
}


int main(){
    vector<int> arr = { 5 ,4 ,3 ,2, 1};
    insertionSort(arr,5);

}