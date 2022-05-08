// Appraoch1 - BF 
#include <bits/stdc++.h>
using namespace std;


int noOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return noOfDigits(n / 10) + 1;
    // base case if n is zero return zero
    // rec case split into smaller and add 1 to it
}

vector<int> getEvenDigitNumbers(vector<int> &arr) {
    vector<int> sorted;
    for (int i = 0; i < arr.size(); i++){
        int count = noOfDigits(arr[i]);
        if (count % 2 == 0){
       

            sorted.push_back(arr[i]);
        }
    }

   return sorted;
}

int main()
{
    vector<int> arr{42, 564, 5775, 34, 123, 454, 1, 5, 45, 3556, 23442};

     arr = getEvenDigitNumbers(arr);
     for (int i: arr){
         cout << i << ',';
     }
    
    
}


// Approach 2 - Converting to string
vector<int> getEvenDigitNumbers(vector<int> &arr) {
    vector<int> sorted;
    for (int i: arr){
       
        string count = to_string(i);
        if (count.length() % 2 == 0){
            
            sorted.push_back(i);
        }
    }

   
   return sorted;
}

// APproach 3 - Log 10

vector<int> getEvenDigitNumbers(vector<int> &arr) {
    vector<int> sorted;
    for (int i: arr){
        int count = (int)log10(i) + 1;
        if (count % 2 == 0){
            
            sorted.push_back(i);
        }
    }

   
   return sorted;
}

