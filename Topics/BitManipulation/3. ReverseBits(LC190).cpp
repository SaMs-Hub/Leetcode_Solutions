// App 1 - Using Left and right shift
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res;
        
        for (int i = 0; i < 32; i++){
            res <<= 1;
            res |= n & 1;
            n >>= 1;
        }
        
        return res;
    }
};
