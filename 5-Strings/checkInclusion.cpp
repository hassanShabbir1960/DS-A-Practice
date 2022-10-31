#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


// This solution cause TLE
// bool checkInclusion(string s1, string s2) {
//       // use a sliding window

//     if (s1==s2) return true;
//     sort(s1.begin(),s1.end());

//     for (int i=0;i<s2.size()-1;i++){
//         string x = s2.substr(i,s1.size());
//         sort(x.begin(),x.end());
//         if (s1==x){
//             return true;
//         }

//     }
//     return false;

// }


bool checkcount(int* count1, int* count2){

    for (int i=0;i<26;i++){
        if (count1[i] !=count2[i]){
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
    // use a sliding window
    if (s1.size() > s2.size()) return false;
    
    int count1[26] = {0};
    int count2[26] = {0};
    
    // Storing count of s1 
    
    for (int i =0;i<s1.size();i++ ){
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }
    // Checking if both strings has same count
    if (checkcount(count1, count2)) return true;

    for (int i=s1.size();i<s2.size();i++){
        count2[s2[i]-'a']++;
        count2[s2[i-s1.size()]-'a']--;
        if (checkcount(count1, count2)) return true;

    }
    return false;
}





int main(){
    string s1 = "ab";
    string s2 = "a";
    cout<<checkInclusion(s1, s2) ;


}