#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr) {
   // get the size of array
        int n = arr.size();

        // imagine the 1st element is sorted, and run a loop from 2nd to last element
        for (int i = 1; i <= n - 1; i++)
        {
            // store currentElement(arr[i]) in a bucktert(e)
            // and take j as i - 1
            int bucket = arr[i];
            int j = i - 1;
            // run a while loop unital j >= 0 and jth element > bucket by decreasing j
            while (j >= 0 and arr[j] > bucket)
            {
                // store jth element in j + 1
                arr[j + 1] = arr[j];
                j -= 1;
            }
              // put bucket element in j + 1
        arr[j + 1] = bucket;
		}
}


int main(){
    int n = 4;

    int arr[] = { -2, 3, -4, 8};

    insertionSort(arr, n);

    //displaying array;
    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
}
