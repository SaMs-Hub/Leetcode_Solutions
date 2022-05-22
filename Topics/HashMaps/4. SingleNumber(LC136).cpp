/// App 1 -Naive sorted
#include <bits/stdc++.h>
using namespace std;

int findNonRepeatingElement(vector<int> &arr) {
    int ans = -1;
    for (int i = 0; i < arr.size() - 1; i+= 2){
       if (arr[i] != arr[i + 1]){
           ans = arr[i];
           break;
       }
    }

    if (ans == -1) {
       ans = arr[arr.size() - 1];
   }

    return ans;
}
int main()
{
    vector<int> arr{1, 1, 2,2, 3, 3, 4};
    cout << findNonRepeatingElement(arr);
    return 0;
}

// App 2 - Using XOR
 int singleNumber(vector<int>& arr) {
      int arrXor = 0;
    // traverse over arr, and sotre xor

    for (int i = 0; i < arr.size(); i++){
        arrXor = arr[i] ^ arrXor;
        
    }
    // return xorv var
    return arrXor;
    }



// App 3 - 
