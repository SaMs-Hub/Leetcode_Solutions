// App 1 - Recursive
class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
    if (n == 2) return 2;

    int oneStep = climbStairs(n - 1);
    int twoSteps = climbStairs(n - 2);

    return oneStep + twoSteps;
    }
};


