#include <iostream>
#include <bits/stdc++.h>

using namespace std;


// vector<vector<int>> threeSum(vector<int>& nums) {
//     vector<vector<int>> res;    
//     for (int i = 0;i<nums.size();i++){
//         for (int j=i+1;j<nums.size();j++){
//             for (int k = j+1 ; k<nums.size();k++){
//                 if (nums[i]+nums[j] +nums[k] ==0 ){
//                     vector<int> temp;
                    
//                     temp.push_back(nums[i]);
//                     temp.push_back(nums[j]);
//                     temp.push_back(nums[k]);
//                     sort(temp.begin(),temp.end());
//                     if (checkVector(res,temp)){
//                         res.push_back(temp);
//                         cout<<nums[i]<<nums[j]<<nums[k]<<endl;

//                     }                    
//                 }
 
//             }
               
                
//         }
//     }
//     return res;

// }


void print(vector<vector<int>> nums){
    for (int i = 0; i < nums.size(); i++)
{
    for (int j = 0; j < nums[i].size(); j++)
    {
        cout << nums[i][j]<<" ";
    }
    cout<<endl;
}
}


bool checkVector(vector<vector<int>> res, vector<int> temp){
    for (int i=0;i<res.size();i++){
        if (res[i][0]== temp[0] && res[i][1]== temp[1] && res[i][2]== temp[2]){
            return false;
        }   

    }
    return true;


}





vector<vector<int>> twoSum(vector<int>& nums, int target,int Noti) {
    vector<vector<int>> res;
    unordered_map<int, int> map;
    
    for (int i =0;i<nums.size();i++){
        if (i!=Noti){
            int diff = target-nums[i];
            if (map.find(diff) != map.end()){
                vector<int> temp;
                temp.push_back(map[diff]);
                temp.push_back(i);
                res.push_back(temp);
                
            }
            map[nums[i]] =i;
        }
    }
    return res;
}

// vector<vector<int>> threeSum(vector<int>& nums) {
//     vector<vector<int>> res;
//     unordered_map<int,int> map;
//     for (int i = 0;i <nums.size();i++){
//         int required = 0 - nums[i];
//         vector<vector<int>> result = twoSum(nums,required,i);  
//         if ( result.size() >=1){
            
//             for (int j =0;j<result.size();j++){
//                 vector<int> temp;
                
//                 temp.push_back(nums[i]);
//                 temp.push_back(nums[result[j][0]]);
//                 temp.push_back(nums[result[j][1]]);



//                 //sort(temp.begin(),temp.end());
//                 res.push_back(temp);
//                 cout << nums[i] << nums[result[j][0]] << nums[result[j][1]] << endl;
            
//                 // res.push_back(temp);
//                 // cout<< nums[i] << nums[result[j][0]]<<nums[result[j][1]] <<endl;
            

//             }
            
//         }
    
              
//     }
    
//     return res;

// }

/*
vector<vector<int>> threeSum(vector<int>& nums) {


    /// Hashmap approach
    vector<vector<int>> res;
    unordered_map<int,int> map;
    sort(nums.begin() , nums.end());     //Sorted Array
    for (int i = 0;i <nums.size();i++){
        map[nums[i]] = i;
    }
    for(int i=0;i<nums.size()-2;i++){
        for(int j=i+1;j<nums.size()-1;j++){
            int target = 0-nums[i]-nums[j];
            if( (map.find(target) != map.end())  && map[target]>j)
                {
                    j=map[nums[j]];

                    res.push_back({nums[i], nums[j], target});
                    cout<< nums[i]<< nums[j]<< target <<endl;
                }
            }
           i=map[nums[i]];  // To remove duplicates
    }
    return res;
}    
*/


vector<vector<int>> threeSum(vector<int>& nums) {


    /// Hashmap approach
    vector<vector<int>> res;
    unordered_map<int,int> map;
    sort(nums.begin() , nums.end());     //Sorted Array
    for (int i = 0;i <nums.size();i++){
        map[nums[i]] = i;
    }
    int i=0;
    int j = nums.size()-1;

    while(i<=j){
        if (map.find(-1* (nums[i] + nums[j]) ) != map.end() ){
            if (map[-1* nums[i] + nums[j]] !=i && map[-1* nums[i] + nums[j]] !=j){
                res.push_back({map[-1* nums[i] + nums[j]],nums[i],nums[j]});
                cout<< nums[i]<< nums[j]<< nums[map[-1* nums[i] + nums[j]]] <<endl;
                
            }
            i++;
                j--;
        }
        else if ( 0 > nums[i] + nums[j]){
            /* code */
            i++;
        }
        else if ( 0 < nums[i] + nums[j]){
            j--;
        }
    }

    return res;
}


int main(){
    vector<int> nums ={-1,0,1,2,-1,-4};
    (threeSum(nums));
    
}