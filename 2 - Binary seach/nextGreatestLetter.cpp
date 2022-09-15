#include <iostream>
#include <bits/stdc++.h>

using namespace std;


char nextGreatestLetter(vector<char>& letters, char target) {
    int start =0;
    int end = letters.size()-1;
    int mid;
    char ans = ' ';
    if (target =='z') return letters[0];

    while(start <= end){ 
        mid = start + ( end - start)/2;

        if (letters[mid] <= target){
            start = mid + 1;
            
        }
        else{
            end  = mid - 1;
        }

    }
    if (start > letters.size()-1) return letters[0];
    return letters[start];


}



int main(){
    //cout<< fibsum(3);
    vector<char> letters = {'c','f','j'};
    cout<<nextGreatestLetter(letters,'c');

    // cout<< (letters[0] < letters[1]);
    // cout<< (letters[1] < letters[2]);
     

}