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


/// App 2 - Sieve of Eratosthenes

int countPrimes(int n) {
    // make all numbers true
        vector<bool> primes(n + 1, true);

        primes[0] = primes[1] = false;
        for (int i = 2; i * i <= n; i++){
            if (primes[i]){
                // if multiple make false
                for (int j = i * i; j <= n; j += i){
                    primes[j] = false;
                }   
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++){
            if (primes[i]){
                count += 1;
            }
        }

        return count;
        
    }
