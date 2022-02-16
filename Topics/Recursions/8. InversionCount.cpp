#include <bits/stdc++.h>
using namespace std;

int merge(int *arr, int si, int ei)
{
    // split into two
    int mid = (si + ei)/2;

    // make temp array and assign start values and make a count
    int temp[100];
    int i = si;
    int j = mid + 1;
    int k = ei;
    int cnt = 0;

    while (i <= mid and j <= ei){
        if (arr[i] < arr[j]){
            arr[k] = arr[i];
            i++;
            j++;
        }else{
            arr[k++] = arr[j++];
            cnt += mid - i + 1;

        }
    }
    while (i <= mid){
        arr[k++] = arr[i++];
    }

    while (j <= ei){
        arr[k++] = arr[j++];
    }

    // storing in original array
    for (int i = si; i <= ei; i++){
        arr[i] = temp[i];
    }

    // return at last after sorting
    return cnt;
}

int inversionCount(int *arr, int si, int ei)
{
    // base case
    if (si >= ei)
    {
        return 0;
    }

    // split into two
    int mid = (si + ei) / 2;

    // add into two
    int x = inversionCount(arr, si, mid);
    int y = inversionCount(arr, mid + 1, ei);
    int z = merge(arr, si, ei);

    // return all three values
    return x + y + z;
}

int main()
{
    int arr[] = {1, 5, 2, 6, 3, 0};
    int n = sizeof(arr) / sizeof(int);

    cout << inversionCount(arr, 0, n - 1);
}
