// Approach 1 - BruteForce using same array
#include <bits/stdc++.h>

using namespace std;

int getMax(vector<int> arr){
    // get the size of arr and traverse throught it
    int n = arr.size();
    for (int i = 1; i < n; i++){
    // if arr[i] is 1, set i as += i - 1 else as 0
       arr[i]== 1 ? arr[i] += arr[i - 1] : arr[i] = 0;
    }
    // reutrn maxElement of arr
    return *max_element(arr.begin(), arr.end());
}
int main()
{
    vector<int> arr{1, 1, 5, 1, 1, 2, 1};

    cout << getMax(arr);
}


// App2 - Using vars
int findMaxConsecutiveOnes(vector<int>& arr) {
          int currCount = 0;
    int maxCount = 0;

    // get the size of arr and traverse throught it
    int n = arr.size();
    for (int i = 0; i < n; i++){
        // if element is 1, increase currCount
        if (arr[i] == 1){
            currCount += 1;
        }else{
            // else get max of maxCount, currntCount & set currentCount as zero
            maxCount = max(currCount, maxCount);
            currCount = 0;
        }
    }

    // get maxCount n return it
    maxCount = max(currCount, maxCount);
    return maxCount; 
    }


// App3 - O(n3)
int maxOnes(vector<int> arr){
    int n = arr.size();
    int maxCount = 0;

    for (int i = 0; i < n;i++){
        
        for (int j = i; j < n;j++){
            int subCount = 0;
            for (int k = i; k <= j; k++){
                subCount += (arr[k] == 1);
            }

            if (subCount == (j - i + 1)) maxCount = max(maxCount, subCount);
        }
    }
    return maxCount;


}
