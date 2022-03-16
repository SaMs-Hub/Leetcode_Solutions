#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(char str[]){
     // base case
     if (str[0] == '\0'){
          return;
     }


     // rec case
     if (str[0] != str[1]){
          removeDuplicates(str + 1);
          
     }else{
          int i = 1;
          for (; str[i] != '\0'; i++){
               str[i - 1] = str[i];
          }
          str[i - 1] = str[i];

          removeDuplicates(str);

     }


     // return calc
}

int main(){
     char str[] = "abbaaba";

     removeDuplicates(str);
     cout << str << endl;
}
