// Approach 1

#include <bits/stdc++.h>
using namespace std;

int lastIndex(int arr[], int n, int key){
     // base case
     if (n == 0){
          return -1;
     }

     // rec case
     int smallerArray = lastIndex(arr + 1, n - 1, key);
     if (smallerArray != -1){
          return smallerArray + 1;
     }else{
          if (arr[0] == key){
               return 0;
          }else{
               return -1;
          }
     }

     // return case
}

int main(){
     int arr[] = {1, 2, 3, 3, 4};
     int n = sizeof(arr)/sizeof(int);

     int key = 3;

     cout << lastIndex(arr, n, key);
}


// Approach 2 -- Using StartingIndex
#include <bits/stdc++.h>
using namespace std;

int lastIndex(int arr[], int n, int key, int si){
     // base case
     if (n == si){
          return -1;
     }

     // rec case
     int smallerArray = lastIndex(arr, n, key, si + 1);
     if (smallerArray != -1){
          return smallerArray;
     }else{
          if (arr[si] == key){
               return si;
          }else{
               return -1;
          }
     }

     // return case
}

int main(){
     int arr[] = {1, 2, 3, 3, 4};
     int n = sizeof(arr)/sizeof(int);

     int key = 3;

     cout << lastIndex(arr, n, key, 0);
}
