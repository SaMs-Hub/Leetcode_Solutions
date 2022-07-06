#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    int sub1Size = mid - low + 1;
    int sub2Size = high - mid;

    vector<int> sub1, sub2;

    for (int i = 0; i < sub1Size; i++){
        sub1.push_back(arr[low + i]);
    }

    for (int i = 0; i < sub2Size; i++){
        sub2.push_back(arr[mid + 1 + i]);
    }

    int i = 0, j = 0, k = low;
    while (i < sub1Size and j < sub2Size){
        if (sub1[i] < sub2[i]) arr[k++] = sub1[i++];
        else arr[k++] = sub2[j++];
    }

    while (i < sub1Size) arr[k++] = sub1[i++];
    while (j < sub2Size) arr[k++] = sub2[j++];

}

void mergeSortProcedure(vector<int> &arr, int low, int high){
    if (high > low){
        int mid = (low + high)/2;

        mergeSortProcedure(arr, low, mid);
        mergeSortProcedure(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

void mergeSort(vector<int> &arr){
    mergeSortProcedure(arr, 0, arr.size() - 1);

}


int main()
{
    vector<int> arr = {8, 2, 8, 0, -1};
    mergeSort(arr);

    for(auto x: arr){
        cout << x << ',';
    }
    return 0;
}
