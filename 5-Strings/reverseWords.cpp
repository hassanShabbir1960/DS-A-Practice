#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<char> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << ", ";
   }
   cout << "]"<<endl;
}

void reverse(vector<char> &v, int si, int ei){
    int i =si;
    int j = ei;

    while (i<=j){
        swap(v[i++],v[j--]);
    }


}

void reverseWords(vector<char>& s) {
    reverse(s,0,s.size()-1);

    int si =0;
    for (int i=0;i<s.size();i++){
        if (s[i]==' ' ){
            reverse(s,si,i-1);
            si=i+1;
        }
        else if(i==s.size()-1){
            reverse(s,si,i);
        }
    }

}


int main(){
    vector<char> v = {'t','h','e',' ','m','a','n',' ','i','s',' ','n','i','c','e'};
    //reverse(v,0,v.size()-1);
    reverseWords(v);
    print_vector(v);


}