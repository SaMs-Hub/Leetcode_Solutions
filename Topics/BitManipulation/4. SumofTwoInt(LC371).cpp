// App 1 XOR & and O(1)
class Solution {
public:
   int getSum(int a, int b) {
    while (b != 0){
        int carry = a & b;
        a = a ^ b;

        // left shifting the digit
        b = (unsigned) carry << 1;
    }

    return a;
        
    }

};
