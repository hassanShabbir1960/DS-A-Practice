
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void print(vector<int> x){
    for (int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
vector<int> singleDigit(vector<int> y, int dig, int zeros){
    vector<int> res;
    for (int i=0;i<zeros;i++){
        res.push_back(0);
    }
    int carry =0;
    int lookup =0;

    for (int i=y.size()-1;i>=0;i--){
        int sum = ( dig * y[i] ) + carry;
        carry = sum / 10;
        lookup = sum % 10;
        res.push_back(lookup);
    }
    if (carry!=0){
        res.push_back(carry);
    }
    reverse(res.begin(), res.end());
    return res;
 
}

vector<int> addVecs(vector<int> a, vector<int> b){
    int n =0;
    int i = a.size()-1;
    int j = b.size()-1;
    int carry =0;
    int lookup =0;
     vector<int> res;
    
    while (i>=0 && j>=0){
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        lookup = sum % 10;
        res.push_back(lookup);
        i--;j--;
    }

    while (i>=0){
        int sum = a[i] + carry;
        carry = sum / 10;
        lookup = sum % 10;
        res.push_back(lookup);
        i--;
    }

    while (j>=0){
        int sum = b[j] + carry;
        carry = sum / 10;
        lookup = sum % 10;
        res.push_back(lookup);
        j--;
    }
    if (carry !=0){
        res.push_back(carry);
    }
    reverse(res.begin(), res.end());
    return res;
}


vector<int>  multiplication(vector<int> x, vector<int> y) {
    if (x.size() > y.size()){
        vector<int > temp;
        temp =x;
        x =y;
        y =temp;
    }

    vector<int> res;
    vector<int> sum ={0};
    for (int i=0;i<x.size();i++){
        sum  = addVecs( singleDigit(y,x[x.size()-1-i],i) , sum);
    }

    
    return sum;
    
}
vector<int> to_vec(int x){
    vector<int> temp;
    while (x!=0){
        temp.push_back(x%10);
        x= x/10;
    }
    reverse(temp.begin(), temp.end());
    return temp;
}

vector<int> factorial(int x) {
    vector <int> temp = {1};

    for (int i=2;i<=x;i++){
        temp = multiplication(temp , to_vec(i));
    }
    return temp;
}


int main(){
    print(factorial(100));   
}
