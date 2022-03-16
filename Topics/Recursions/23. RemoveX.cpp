#include <bits/stdc++.h>
using namespace std;

void removeX(char str[]){
     // base case
     if (str[0] == '\0'){
          return;
     }

     // rec case
     if (str[0] != 'x'){
          removeX(str + 1);
     }else{
          int i = 1;
          for (; str[0] != '\0'; i++){
               str[i - 1] = str[i];
          }
          str[i - 1] = str[i];

          removeX(str);
     }

     // return calc
}

int main(){
     char str[] = "Hello Worldx";

     removeX(str);
     cout << str << endl;
}
