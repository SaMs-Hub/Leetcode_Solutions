// App1 - Naive

bool isPerfectSquare(int num) {
        for (long long i = 1; i <=  num; i++){
            if (i * i == num){
                return true;
            }else if(i * i > num){
                return false;
                
            }
        }
        return false;
    }


// App 2 - BinarySearch Recursion
bool perfect(int low, int high, int num )
{
    if (high >= low){
        int mid = high + low/2;
        int square = mid * mid;

        if (square == num){
            return true;
        }else if (square < num){
            return perfect(mid + 1, high, num);
        }else{
            return perfect(low, mid -1, num);
        }

    }
    return false;
}

bool isPerfectSquare(int num)
{
    int max = 10000;
    return perfect(1, max, num);
}
