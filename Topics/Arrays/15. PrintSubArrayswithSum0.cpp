#include <bits/stdc++.h>
using namespace std;

int printSubZero(int *arr, int n){
    // make two vars to store start and end index of subArray
    int start = 0;
    int end = -1;


    // traverse throught the array with j calls at i place
    for (int i = 0; i < n;i++){

        // make a var sum to store sum
        int sum = 0;
        for (int j = i; j < n; j++){
            // keep adding sum at j iterations
            sum += arr[j];

            if (sum == 0){
                start = i;
                end = j;

                for (int k = start; k <= end; k++){
                    cout << arr[k] << ",";
                }

                cout << endl;
            }

            

            
        }
    }

    

    // if sum is zero, print them



    
}

int main()
{
    int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int n = sizeof(arr) / sizeof(int);

    printSubZero(arr, n);

    return 0;
}
