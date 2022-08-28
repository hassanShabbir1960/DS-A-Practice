#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int mySqrt(int x){
    if (x==1){
        return 1;
    }
    int mid;
    int start = 0,end = x-1;
    int temp=0;
    while(start<=end){
        mid = start + (end-start)/2;
        if(mid * mid > x){
            end = mid -1;
        }

        else if (mid * mid <x){
            temp = mid;
            start = mid+1;
        }
        else if (mid * mid == x){
            return mid;
        }

    }
    return temp;

}

// int sum (int n){
//     if (n==0){
//         return n;
//     }
//     return n +sum(n-1);

// }

// int fibsum (int n){
//     if (n<=1){
//         return n;
//     }
    
//     return fibsum(n-1) +fibsum(n-2) ;

// }


int main(){
    //cout<< fibsum(3);
    cout<<mySqrt(2147395599);
}