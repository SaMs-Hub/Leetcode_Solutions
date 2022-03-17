#include <bits/stdc++.h>
using namespace std;

void printSubZero(int arr[], int n){
     // traverse over i
     for (int i = 0; i < n; i++){
          
          int sum = 0;
          for (int j = i; j < n; j++){
               sum += arr[j];

               if (sum == 0){
                    cout << "(" << i << "..." << j << ")" << endl;
               }
          }
     }

     // traverse over j

     // get the sum

     // print i, j if sum is 0
}



int main(){
     int arr[] =  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
     int n = sizeof(arr)/sizeof(int);

     printSubZero(arr, n);

     return 0;
}
