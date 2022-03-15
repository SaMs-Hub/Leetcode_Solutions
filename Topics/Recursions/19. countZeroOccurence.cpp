#include <bits/stdc++.h>
using namespace std;

int zeroCount(int n){
     // base case
     if(n == 0){
          return 0;
     }

     // rec case
     int smallerOutput = zeroCount(n/10);

     // return calc
     int remainder = n % 10;
     if (remainder == 0){
          smallerOutput += 1;
     }

     return smallerOutput;
}

int main(){
     int n = 20048;

     cout << zeroCount(n);
}
