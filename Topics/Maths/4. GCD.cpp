// App 1 - Swap Naive
int gcd(int m, int n) {
    if (m > n) swap(m, n);

    for (int i = m; i >= 1; i--){
        if (m % i == 0 && n % i == 0) return i;
    }
    return 1;
}

// App 2 - Euclidean GCD

int gcd(int m, int n){
    if (m == 0) return n;
    return gcd(n % m, m);
}
