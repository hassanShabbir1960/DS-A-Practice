#include <math.h>

class Solution {
public:
   int reverse(int x) {

    
    bool isNegative =false;
    int sum =0;
    if (x<1){
        x =abs(x);
        isNegative =true;
    }

    while (x>0){
        
        if (sum < (-pow(2,31)/10 ) || sum> (pow(2,31)-1 )/10){
            return 0;
        }

        sum = (sum*10) + x%10;
        x=x/10;
    }    
    if (isNegative){
        return -sum;
    }
    return sum;    
}


};