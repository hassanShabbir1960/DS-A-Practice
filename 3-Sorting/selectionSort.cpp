#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a =b;
    b = temp;
}


int findMinIndex(int arr[], int si,int n){
    
    int min = arr[si];
    int minIndex = -1;
    for (int j = si;j <n;j++){
        if (arr[j] <=min){
            min = arr[j];
            minIndex = j;
        }
    }
    return minIndex;
}

void print(int arr[],int n){
    for (int i =0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

}
void selectionSort(int arr[], int n){
    
    for (int i =0;i<n-1;i++){
        //int temp = findMinIndex(arr, i+1, n);

        int minIndex = i;

        for (int j = i+1;j <n;j++){
            if (arr[j] <=arr[minIndex]){
                minIndex = j;
            }
        }
        
        swap(arr[i], arr[minIndex]);
        print(arr,n);
    }
    

}


int main(){
    int arr[5] = { 6 ,2 ,8 ,4, 10};
    selectionSort(arr,5);
    
    




}