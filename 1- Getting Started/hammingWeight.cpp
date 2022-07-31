class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count= 0;

        for (;n!=0;n=n>>1){
            if (n&1){
                count++;
            }
        }
        return count;
    }
};
