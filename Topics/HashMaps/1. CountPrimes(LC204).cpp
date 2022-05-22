// App 1 - Naive

#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    // traverse from 2 to n
    for (int i = 2; i < n; i++)
    {
        // if n divisible by i return false
        if (n % i == 0)
        {
            return false;
        }
    }
    // return true
    return true;
}

int primesUptoN(int n)
{

    // base case if n is < 1 return {}
    if (n <= 2)
    {
        return 0;
    }

    
    // make arr for result

    int primes = 0;
    // else traverse from 2 to n
    for (int i = 2; i <= n; i++)
    {
        // check for prime, if prime push it
        if (checkPrime(i))
        {
            primes += 1;
        }
    }

    // return primes
    return primes;
}

int main()
{
    cout << primesUptoN(10);
    return 0;
}


/// App 2 - Sieve of 
