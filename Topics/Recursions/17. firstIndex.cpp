// Approach 1
#include <bits/stdc++.h>
using namespace std;

int firstIndex(int arr[], int n, int key){
     // base case
     if(n == 0){
          return -1;
     }

     if (arr[0] == key){
          return 0;
     }

     // rec case
     int smallerArray = firstIndex(arr + 1, n - 1, key);

     // return calc
     if (smallerArray != -1){
          return smallerArray + 1;
     }else{
          return -1;
     }
}

int main(){
     int arr[] = {1, 2, 3, 3, 4};
     int n = sizeof(arr)/sizeof(int);
     int key = 3;

     cout << firstIndex(arr, n, key);
}


// Approach 2 Using StartingIndex
#include <bits/stdc++.h>
using namespace std;

int firstIndex(int arr[], int n, int key, int si){
     // base case
     if(si == n){
          return -1;
     }

     if (arr[si] == key){
          return si;
     }

     // rec case
     int smallerArray = firstIndex(arr, n, key, si + 1);

     // return calc
     if (smallerArray != -1){
          return smallerArray;
     }else{
          return -1;
     }
}

int main(){
     int arr[] = {1, 2, 3, 3, 4};
     int n = sizeof(arr)/sizeof(int);
     int key = 3;

     cout << firstIndex(arr, n, key, 0);
}
