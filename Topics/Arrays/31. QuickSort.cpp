#include <bits/stdc++.h>
using namespace std;


int makePartition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int currIndex = low - 1;
    for (int i = low; i < high; i++){
        if (arr[i] < pivot){
            currIndex += 1;
            swap(arr[i], arr[currIndex]);
        }
    }
    swap(arr[high], arr[currIndex + 1]);
    return currIndex + 1;
}

void quickSortHelper(vector<int> &arr, int low, int high){
    if (high > low){
        int pivot  = makePartition(arr, low, high);
        quickSortHelper(arr, low, pivot - 1);
        quickSortHelper(arr, pivot + 1, high);
    }
}

void quickSort(vector<int> &arr){
    quickSortHelper(arr, 0, arr.size() - 1);
}

int main()
{
    vector<int> arr = {8, 2, 8, 0, -1};
    quickSort(arr);

    for(auto x: arr){
        cout << x << ',';
    }
    return 0;
}
