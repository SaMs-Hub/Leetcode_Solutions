#include <bits/stdc++.h>
using namespace std;

int countOccurence(int n, int K)
{
    // base case
    /// if n is 0 return 0
    if (n == 0){
        return 0;
    }
    
    // rec case get call on smaller and then return ans from digit
    int smallerOutput = countOccurence(n/10, K);
    int digit = n%10;
    if (digit == K){
        smallerOutput =  1 + smallerOutput;
    }

    return smallerOutput;

}
int main()
{
    int n = 20002;
    cout << countOccurence(n, 2);
}
