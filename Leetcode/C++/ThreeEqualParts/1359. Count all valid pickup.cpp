class Solution {
public:
    int countOrders(int n) {
        long res = 1L;
        for (int i = 1; i <= 2*n; i++) {
           // int x = (i % 2 == 0) ? (i >> 1) : i;
            int x;
            if (i % 2 == 0){
                 x = i >> 1;
            }else{
                 x = i;
            }
            res *= x;
            res %= 1000000007;
        }
        return (int) res;
    }
};
