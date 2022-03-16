#include <bits/stdc++.h>
using namespace std;

void replaceChar(char str[], char a, char b){
     // base case
     if (str[0] == '\0'){
          return;
     }

     // rec case
     if (str[0] != a){
         replaceChar(str + 1, a, b);
     }else{
          str[0] = b;
          replaceChar(str, a, b);
     }

     // return calc
}

int main(){
     char str[] = "abc bc bc";
     char a = 'b';
     char b = 'i';
     
     replaceChar(str, a, b);
     cout << str << endl;
}
