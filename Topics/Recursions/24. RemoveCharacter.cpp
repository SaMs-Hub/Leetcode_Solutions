#include <bits/stdc++.h>
using namespace std;

void removeChar(char str[], char a){
     // base case
     if (str[0] == '\0'){
          return;
     }

     // rec case
     if (str[0] != a){
          removeChar(str + 1, a);
     }else{
          int i = 1;
          for (; str[i] != '\0'; i++){
               str[i - 1] = str[i];
          }
          str[i - 1] = str[i];

          removeChar(str, a);
     }

     // return calc
}

int main(){
     char str[] = "Hello World";
     char a = 'o';
     removeChar(str, a);
     cout << str << endl;
}
