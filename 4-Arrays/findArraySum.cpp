#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    int sum =0;
    int carry =0;
    int av,bv,loopsize;
    vector<int> ans;
    
    int i = n-1;
    int j = m -1;

    while (i>=0 && j >=0){
        
        int temp = a[i] + b[j] + carry;

        sum = temp%10;
        carry = temp/10;

        ans.push_back(sum);
        i--;j--;

    }

    while (i>=0){
        int temp = a[i]  + carry;

        sum = temp%10;
        carry = temp/10;

        ans.push_back(sum);
        i--;

    }

    while (j>=0){
        int temp = b[j] + carry;

        sum = temp%10;
        carry = temp/10;

        ans.push_back(sum);
        j--;

    }

    if (carry >0){
        ans.push_back(carry);
    }

    reverse(ans.begin(), ans.end());
    
    return ans;
}



int main(){
    vector<int> a = {2, 4, 6, 8 };
    vector<int> b = {2, 4, 6, 8 };
    

    

    findArraySum(a,a.size(),b,b.size());
}