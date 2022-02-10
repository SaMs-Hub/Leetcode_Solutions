#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {1, 2, 3, 3, 3, 3, 5};
    int n = sizeof(arr)/sizeof(int);

    int key = 3;

    bool present = binary_search(arr, arr + n, key);
    if (present){
        cout << "Present" << endl;
    }else{
        cout << "Not Found" << endl;
    }

    auto lb = lower_bound(arr, arr + n, key);
    cout << "first occurence" << (lb - arr) << endl;

    auto ub = upper_bound(arr, arr + n, key);
    cout << "Last occurence" << (ub - arr) << endl;
   
}
