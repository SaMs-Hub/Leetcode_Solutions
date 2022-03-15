#include <bits/stdc++.h>
using  namespace std;

int digitsSum(int n){
     // base case
     if (n == 0){
          return 0;
     }

     // rec case
     int smallerDigit = digitsSum(n/10);

     // return calc
     int remainder = n % 10;
     return remainder + smallerDigit;
}

int main(){
     int n = 2048;

     cout << digitsSum(n);
}
