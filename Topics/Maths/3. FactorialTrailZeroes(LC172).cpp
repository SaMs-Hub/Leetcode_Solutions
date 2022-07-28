// App 1 - Naive
int trailingZeroesInFactorial(int n) {
    int count = 0;
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }

    while (fact % 10 == 0){
        count += 1;
        fact /= 10;
    }
    return count;
	
}

// App 2 - Optimal O(n)
class Solution {
public:
    int trailingZeroes(int n) {
         int count = 0;
    int pow5 = 5;
    while (n >= pow5){
        count += (n/pow5);
        pow5 *= 5;
    }
    return count;
	
    }
};
	
