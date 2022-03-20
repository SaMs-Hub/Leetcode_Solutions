// Approach 1
// naive - Brute Force Approach
//TC - O(n2) and SC - no extra space required and n is size of input

#include <bits/stdc++.h>
using namespace std;

int findPair(int arr[], int n, int target){
    // count to store the number of pairs equals to target
    int count = 0;
    // traverse thorugh i to n -1
    for (int i = 0; i < n - 1; i++){
    // traverse through i + 1 to n
        for (int j = i + 1; j < n; j++){
            // if i + j is sum print Pairs
            if(arr[i] + arr[j] == target){
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
                count += 1;

            }
           
        }   

    }

    return count;

}


    


int main()
{
    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target = 100;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    cout << findPair(nums, n, target);
 
    return 0;
}


------------
// Approach 2
// naive - Sorting Approach
// TC - O(n.logn) and SC - no extra space required
 
#include <bits/stdc++.h>
using namespace std;

int findPair(int arr[], int n, int target){
    // var count to store the number of pairs
    int count = 0;

    // sort the array
    sort(arr, arr + n);

    // make two vars to store endPoints of array
    int low = 0;
    int high = n - 1;

    // run a while loop to check if endPoints pairs the sum
    while (low < high){
        // if True, call them else if their sum less than target increment low
        if (arr[low] + arr[high] == target){
             cout << "(" << arr[low] << "," << arr[high] << ")" << endl;
            count += 1;
        }

        // else decrement high

        (arr[low] + arr[high] < target) ? low++ : high--;
        
    }

    return count;

}
    
int main()
{
    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    cout << findPair(nums, n, target);
 
    return 0;
}




------------
// Approach 3
// naive - Hashing Approach
// TC - O(n) and SC - O(n)


#include <bits/stdc++.h>
using namespace std;

int findPair(int arr[], int n, int target){
    // var count to store the number of pairs
    int count = 0;

    // make a map to store visited element in array
    unordered_map<int, int> map;


    // traverse though 0 to n - 1
    for(int i = 0; i < n; i++){
         // check if difference between arr[i] and target exist sin map
         if (map.find(target - arr[i]) != map.end()){
             // if True, count ++ else add it to map
            cout << "(" << arr[map[target - arr[i]]] << "," << arr[i] << ")" << endl;
            count += 1;
         }


        map[arr[i]] = i;
    }

  

    
    return count;

}


    


int main()
{
    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    cout << findPair(nums, n, target);
 
    return 0;
}


  
 
  
  
