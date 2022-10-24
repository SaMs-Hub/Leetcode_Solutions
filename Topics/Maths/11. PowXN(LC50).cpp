// App 1 - Recursions O(log n) same TC
class Solution {
public:
   double helper(double x, int n){
    if (x == 0) return 0;
    if (n == 0) return 1.0;

    double result = helper(x * x, n/2);

    if (n % 2 == 0) return result;
    else return x * result;
}

  double myPow(double x, int n) {

    double absX = abs(x);
    double res = helper(x, n);
    if (n >= 0) return res;
    return 1.0/res;
        
    }
};


// App 2 Iterative O(log n) TC O(1)
 double myPow(double x, int n) {
    double absN = abs(n);
    double curr = x;
    double result = 1.0;

    long int i = absN;
    while (i > 0){

        if (i % 2 == 1) result *= curr;
        curr *= curr;
        i /= 2;
    }

    if (n > 0) return result;
    return 1.0/result;

    
}
