#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    int oldCount=0;
    int newCount=0;
    vector<int> checked;
    vector<int> unique;
    bool check = true;


    for(int i=0;i<arr.size();i++){
        for (int j=0;j<arr.size();j++){
            if(find(checked.begin(), checked.end(), arr[i])!=checked.end()){
                // Found the item
                continue;
            }

            else if(arr[i]==arr[j]){
                newCount++;
            }
        }
        
        if(find(unique.begin(), unique.end(), newCount)!=unique.end()){
            if (newCount!=0){
                return false;
            }
        }
        else{
            unique.push_back(newCount);
        }

        oldCount =newCount;
        newCount =0;
        checked.push_back(arr[i]);     
    }
    
    return check;
}






int main(){
    vector<int> arr = {1,2,2,1,1,3};
    //cout<<uniqueOccurrences(arr);
    unordered_map <int,int> m;
    m[0]++;
    for (auto i : m){
            if(s.find(i.second) != s.end())
                return false;
            s.insert(i.second);
    }

}