TC - O(n2)

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



// Same using vectors
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr){
    int n = arr.size();
    for (int i = 1; i < n; i++){
        int currentElement = arr[i];
        int position = i - 1;

        while (position >= 0 and arr[position] > currentElement){
            arr[position + 1] = arr[position];
            position -= 1;
        }

        arr[position + 1] = currentElement;
    }
}


int main()
{
   vector<int> arr{1, 8, 0, -2, 6};

   insertionSort(arr);
   for (auto x: arr){
    cout << x << ',';
   }
}
