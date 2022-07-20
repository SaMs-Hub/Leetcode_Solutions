// App 1 - BF 
bool isPrime(int n){
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

vector<int> checkPrimes(int n){
    if (n <= 1) return {};

    vector<int> primes;
    for (int i = 2; i < n; i++){
        if (isPrime(i)) primes.push_back(i);
    }
    return primes;
}


// App 2 - Sieve of Eratosthenes
vector<int> checkPrimes(int n){
    vector<int> primes;
    vector<int> isPrime(n + 1, true);

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n;i++){
        if (isPrime[i]){
            for (int j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < n; i++){
        if(isPrime[i]) primes.push_back(i);
    }
    return primes;

    
   
    return primes;
}
