#include <bits/stdc++.h>
using namespace std;

int noOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return noOfDigits(n / 10) + 1;
    // base case if n is zero return zero
    // rec case split into smaller and add 1 to it
}

int main()
{
    int n = 1381;
    cout << noOfDigits(n);
}
