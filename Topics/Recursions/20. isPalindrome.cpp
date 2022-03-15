#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char str[], int si, int ei){
     // base case
     if (si >= ei){
          return true;
     }

     if (str[si] != str[ei]){
          return false;
     }

     // rec case
     bool smallerOutput = isPalindrome(str, si  + 1, ei - 1);

     // return calc
     return smallerOutput;

}

int main(){
     char string[100] = "sbss";
     int n = strlen(string);
     cout << isPalindrome(string, 0, n - 1);
}
