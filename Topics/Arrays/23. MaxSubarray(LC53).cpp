// Approach1 - Kadanes

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& arr) {
        if (arr.size() == 1){
		return arr[0];
	}
        int currSum = 0;
        int maxSum = INT_MIN;

        for (int i =0; i < arr.size(); i++){
            currSum += arr[i];
            if (maxSum < currSum){
                maxSum = currSum;
            }
            
            if (currSum < 0){
                currSum = 0;
            }
            
            
        }

        return maxSum;
    }


int main()
{
    vector<int> arr{-2, -1};

     cout << maxSubArray(arr);
    
    
}

// Approach 2 - Kadanes
int maxSubArray(vector<int>& arr) {
        if (arr.size() == 1){
		return arr[0];
	}
        int currSum = 0;
        int maxSum = INT_MIN;

        for (int i =0; i < arr.size(); i++){
            if (arr[i] <= currSum + arr[i]){
                currSum += arr[i];
            }else{
                currSum = arr[i];
            }
            if (maxSum < currSum){
                maxSum = currSum;
            }
            
            
            
             //maxSum = max(currSum, maxSum);

        }

        return maxSum;
    }


// Approach 3 - Dynamic Programming - Greddy O(n)
int maxSubArray(vector<int>& arr) {
        if (arr.size() == 1){
		return arr[0];
	}
        int currSum = arr[0];
        int maxSum = arr[0];

        for (int i =1; i < arr.size(); i++){
            currSum = max(arr[i], arr[i] + currSum);
            maxSum = max(maxSum, currSum);
            
            
            
             //maxSum = max(currSum, maxSum);

        }

        return maxSum;
    }



// App 4 - BruteForce O(n3)
int maxSum(vector<int> &arr){
    int n = arr.size();

    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int currSum = 0;
            for (int k = i; k <= j; k++){
                currSum += arr[k];
            }
            maxSum = max(maxSum, currSum);
        }
    }

    return maxSum;
}

