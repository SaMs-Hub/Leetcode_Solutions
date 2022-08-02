// App1 - Naive

#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)

{
    // base case - if x is 0 or 1 return x
    if (x == 0 || x == 1){
        return x;
    }
    // iterate from 1 to n - 1, if i * i > nums, return n - 1
    for (long long i = 1; i < x; i++){
        if (i * i > x){
            return i - 1;
        }
    }

}

int main()
{
    cout << mySqrt(5);
    return 0;
}


// App 2- iterative - BinarySearch
 int mySqrt(int num) {
    if (num == 0 || num == 1) {
       return num;
   }
   long long low = 1, high = num, mid, ans = 1;
   while (low <= high) {
       mid = (high + low) / 2;
       if (mid <= num / mid) {
           low = mid + 1;
           ans = mid;
       } else {
           high = mid - 1;
       }
   }
   return ans;

}

// App 2.2 - Recursive BinarySearch
int getBinary(int n, int low, int high, int ans){
    if (high >= low){
        int mid = (low + high)/2;

        if (mid <= n/mid) return getBinary(n, mid + 1, high, mid);
        else return getBinary(n, low, mid - 1, ans);
    }
    return ans;
}

int mySqrt(int n){
    return getBinary(n, 1, n, 1);

}

