#include <string>
#include <iostream>
using namespace std;


char tolower(char a){
    if (a >= 'A' && a <='Z'){
        return a - 'A' + 'a';
    }
    else{
        return a;
    }
}

bool checkPalindrome(string s){
    // Write your code here.
    int start =0;
    int end = s.size()-1;

    while (start <=end){

        if ( ((s[start] < '0' || s[start] >'9') &&  (s[start] < 'A' || s[start] >'Z') && (s[start] < 'a' || s[start] >'z')) || s[start] ==' ') {
            start++;
        }
        else if ( ((s[end] < '0' || s[end] >'9') &&  (s[end] < 'A' || s[end] >'Z') && (s[end] < 'a' || s[end] >'z')) || s[end] ==' '){
            end--;
        }

        else{
            // cout<< tolower(s[start]) <<endl;
            // cout<< tolower(s[end])<<endl;
            if ( tolower(s[start]) != tolower(s[end]) ){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
    }

    return true;


}



int main(){
    string a ="aaBBa@";
    cout<<checkPalindrome(a);
}