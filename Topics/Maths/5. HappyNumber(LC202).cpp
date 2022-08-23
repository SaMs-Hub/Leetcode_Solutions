// App 1 - Two Pointers
class Solution {
public:
   int getNext(int n){
    int sum = 0;

    while (n > 0){
        int digit = n % 10;
        sum += pow(digit,2);
        n/= 10;
    }
    return sum;
}

bool isHappy(int n){
    int slow = n;
    int fast = getNext(n);

    while (slow != fast && fast != 1){
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    }
    if (fast == 1) return true;
    return false;

}

};
