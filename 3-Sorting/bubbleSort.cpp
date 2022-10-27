#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a =b;
    b = temp;
}

void print(int arr[],int n){
    for (int i =0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

}
void bubbleSort(int arr[], int n){
    
    for (int i =0;i<n-1;i++){
        
        for (int j = i+1;j<n;j++){
            if (arr[i] >arr[j]){
                swap(arr[i], arr[j]);
            }
        }
        
        
        print(arr,n);
    }
    

}



int main(){
    int arr[5] = { 5 ,4 ,3 ,2, 1};
    bubbleSort(arr,5);

}