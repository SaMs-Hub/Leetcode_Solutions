// App 1 - Recursive O(2**n)
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


// App 2 - BottomUp O(n)
int climbStairs(int n){
    int first = 1;
    int second = 1;

    for (int i = 0; i < n - 1; i++){
       int  temp = first;
        first += second;
        second = temp;
    }
    return first;

}


// App 3 - TopDown O(n)
int climbStairs(int n){
    if (n ==1 or n == 2) return n;
    int first = 1;
    int second = 2;

    int temp;
    for (int i = 2; i < n ; i++){
      temp = first + second;
        first = second;
        second = temp;
    }
    return temp;

}

