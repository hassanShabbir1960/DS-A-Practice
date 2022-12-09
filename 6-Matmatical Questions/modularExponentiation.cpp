
#include <iostream>
using namespace std;
int modularExponentiation(int x, int n, int m) {
	// Write your code here.

    int res =1;
    while (n>0){
        if (n&1){
            res = res * x;
        }
        x = x*x;
        n = n /2;

    }
    return res;
}


int main(){
   cout<< modularExponentiation(2,5,1);
}
