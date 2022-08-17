// App 1- Bit O(1)
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bit = 0, result = 0;
        
        while (n != 0){
            bit = n & 1;
            if (bit == 1) result += 1;
            n >>= 1;
        }
        return result;
        
    }
};
