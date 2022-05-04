#include <bits/stdc++.h>
using namespace std;

int minSteps(int n){
    // base case
    if (n == 1){
        return 0;
    }

    // rec case
    int opt1, opt2, opt3;
    if (n % 3 == 0){
        opt1 = minSteps(n/3);
    }

    if (n%2 == 0){
        opt2 = minSteps(n/2);
    }

    opt3 = minSteps(n - 1);

    int minStep = min(opt1, min(opt2, opt3));

    // rturn 
    return minStep + 1;
}

int main()
{
   cout << minSteps(10);
}
