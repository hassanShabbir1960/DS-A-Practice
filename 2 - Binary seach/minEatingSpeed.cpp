
#include <bits/stdc++.h>
using namespace std;
#include <cmath> 
bool isPossible(vector<int>& piles, int h,int mid){

    int hours =0;
    for (int i=0;i<piles.size();i++){
            hours += ceil((double)piles[i]/(double)mid);
        
    }
    if (hours <=h){
        return true;
    }
    else{
        return false;
    }
}

int minEatingSpeed(vector<int>& piles, int h) {
    int s=1,mid;
    int e = -1;

    for (int i=0;i<piles.size();i++){
        if (piles[i]>e){
            e= piles[i];
        }
    }

    int speed =-1;
    while (s<=e){
        mid = (s + e)/2; 
        if (isPossible(piles,h, mid)){
            speed = mid;
            e =  mid -1;
        }
        else{
            s = mid +1;
        }
    }
    return speed;

}


int main(){
    vector<int> piles ={30,11,23,4,20};
    cout<<minEatingSpeed(piles, 6);

}

