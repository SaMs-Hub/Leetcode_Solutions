// Approach1 - BruteForce + sortSTL

#include <bits/stdc++.h>
using namespace std;

vector<int> getSquareSortedArray(vector<int> &arr) {
    vector<int> sorted;
	
	int n = arr.size();
	for (int i = 0; i < n; i++){
		arr[i] = arr[i] * arr[i];
       
	}
   
    sort(arr.begin(), arr.end());

   

   return arr;


}

int main()
{
    vector<int> arr{-2, 3, 8, 4};

    getSquareSortedArray(arr);

    for (int i = 0; i < arr.size(); i++){
       cout << arr[i] << ',';
   }

    
}


// Approach 2 - Two pointers + extra array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
     // get the size of arr
    int n = arr.size();

    // make a vector sorted to return of size n
    vector<int> result(n);
    // take two pointers start n end, along with positon for result array
    int start = 0;
    int end = n - 1;

    int position = n - 1;

    // while start end not equal
    while (start <= end)
    {
        // check if stat < end, if yes sorted[k] as end * end or start * start
        if (abs(arr[start]) < abs(arr[end]))
        {
            result[position--] = arr[end] * arr[end];
            end -= 1;
        }
        else
        {
            result[position--] = arr[start] * arr[start];
            start += 1;
        }
    }

    return result;
        
        
    }
    
};

