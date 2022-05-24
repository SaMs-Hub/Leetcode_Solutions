// App 1 - Naive 
bool isPowerOfTwo(int n) {
   int count = 0;
	while (n != 0){
		if (n % 2 == 1){
			count += 1;
		}
		n /= 2;
	}
	
	return count == 1;
    }


// App 2- Bitwise
bool isPowerOfTwo(long long n) {
    if (n == 0){
        return false;
    }
        
    return !(n & (n - 1));
    }
