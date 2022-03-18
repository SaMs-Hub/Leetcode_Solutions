#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool hasZeroSumSubarray(int arr[], int n){
     // create a set to store the sum of subarrays
     unordered_set<int> set;

     // initialize it by inserting 0, and make var sum 
     set.insert(0);
     int sum = 0;

     // traverse throught arr, and keep adding it to sum
     for (int i = 0; i < n; i++){
          sum += arr[i];
          // try searching for sum in set, if found true else insert sum into set
          if (set.find(sum) != set.end()){
               return true;
          }else{
               set.insert(sum);
          }
     }

     return false;
     



}

int main(){
     int arr[] = { 4, 2, -3, -1, 0, 4 };
     int n = sizeof(arr)/sizeof(int);

     cout << hasZeroSumSubarray(arr, n);
}
