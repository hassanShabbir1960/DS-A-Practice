
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;



/// Question 1

int classTest(int n, vector<int> &a, int k) {
    // Write your code here.
    sort(a.begin(), a.end(),greater());
    int rank = 0 ;
    
    for (int i=0;i<a.size();i++){
        rank++;
        if (rank ==k){
            return a[i];
        }
        
    }
    return -1;
}

/// Question 2

string binaryShopping(string S, int P)
{
    
    int count=0;
    
    if (S.size()>1){
    // Write your code here. 
    for (int i=S.size()-1;i>=0;i--){
        if (S[i]=='1'){
            S[i]='0';
            count++;
            if (count==2){
                return S;
            }
        }
    }
    }
    return S;
}


/// Question 3


vector<int> bitwiseAnd(int n, int q, vector<int> arr, vector<int> queries){
    //Write your code here.
    vector<int> ans;
    for (int i=1;i<arr.size(); i++){
        arr[i] = arr[i] & arr[i-1];
    }
    for (int j=0;j<q;j++){
        
        int maxi =0;
        for (int i=0;i<n;i++){
            if (arr[i] >= queries[j]){
                maxi = i+1; 
            }
        }
        ans.push_back(maxi);
    }
    return ans;
}



/// Question 4

int LightUptheStreet(int n, int m , int k , vector <int> Checkpoints){
	// Two variable stores the longest range covers, First checks maximum of all ranges including non selected. Where as last_range stores range of last selected range
	int max_till_now = 0 , last_range = 0;
	// Stores answer
	int ans = 0;
	for(int i : Checkpoints){
		// If our last selected range cannot cover the range of our current checkpoint.
		if(i - k - 1 > last_range){

			// If our last all ranges cannot fill our current checkpoint range we know the parts remain without light and its impossible.
			if(i - k - 1 > max_till_now){
				ans = -1;
				break;
			}

			// Now we need to select atleast one previous range to fill the missing non-lighted areas so, answer is incremented and range is Updated.
			ans++;
			last_range = max_till_now;
		}

		// Updating our current maximum range to new.
		max_till_now = i + k;
	}
	// After selecting all ranges accordingly we need to check if we covered till Nth point
	if(last_range < n){

		// If our both last range and maximum range failed to do so its impossible. Else we need 1 more light.
		if(max_till_now < n){
			ans = -1;
		} else {
			ans++;
		}
	}
	return ans;
}
