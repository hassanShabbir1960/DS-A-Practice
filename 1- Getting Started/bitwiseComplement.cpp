class Solution {
public:
    
int bitwiseComplement(int n) {
    // Edge case
    if (n==0){
        return 1;
    }
    // Taking negation 
    int neg_n =~n;
    
    int i=0;
    while (n!=0){
        n = n>>1;
        i++;
    }
    int mask =0 ;
    for (int j=0;j<i;j++){
        mask = mask << 1;
        mask = mask | 1;
        
    }

    return neg_n & mask;




}

};