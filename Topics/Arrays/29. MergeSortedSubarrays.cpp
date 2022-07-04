#include <bits/stdc++.h>
using namespace std;

void mergeSortSub(vector<int> &arr, int endIndex){
    int sub1Current = 0, sub2Current = endIndex + 1;

    vector<int> res;
    while (sub1Current <= endIndex && sub2Current <= arr.size()){
        if (arr[sub1Current] < arr[sub2Current]) res.push_back(arr[sub1Current++]);
        else res.push_back(arr[sub2Current++]);
    }

    while(sub1Current <= endIndex) res.push_back(arr[sub1Current++]);
    while (sub2Current <= arr.size()) res.push_back(arr[sub2Current++]);

    for (int i = 0; i < arr.size(); i++){
        arr[i] = res[i];
    }
}


int main()
{
   vector<int> arr1{1, 3, 5, 7, 9, 11, 0, 4, 6, 8};


    mergeSortSub(arr1, 5);
   for (auto x: arr1){
    cout << x << ',';
   }
}
