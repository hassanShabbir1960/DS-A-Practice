#include <iostream>
using namespace std;
#include <vector>


int countPrimes(int n) {
    if (n==0 || n==1) return 0;

    vector<int> bools(n,1) ;

    bools[0] = 0;
    bools[1] = 0;
    
    int count =0 ;

    for (int i=2;i<n;i++){

        if (bools[i]){
            count++;
            for (int j=i*i;j<n ;j=j+i){
                bools[j] = 0;
                
            }
        } 

    }
    return count;


}


int main(){
    cout<<countPrimes(10);
}

