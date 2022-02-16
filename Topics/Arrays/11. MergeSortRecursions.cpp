#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int si, int ei)
{
    // splitting into two
    int mid = (si + ei)/2;

    // taking starting values of both and making an temp array
    int i = si;
    int j = mid + 1;
    int k = si;


    int temp[100];

    // store output in temp array based on sort
    while (i <= mid and j <= ei)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= ei)
    {
        temp[k++] = arr[j++];
    }

    // copy temp array into original array
    for (int i = si; i <= ei; i++)
    {

        arr[i] = temp[i];
    }
}

void mergeSort(int *arr, int si, int ei)
{
    // base case
    if (si >= ei)
    {
        return;
    }

    // rec case
    // div into two
    int mid = (si + ei)/2;

    // call on smallerOutput
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    // mergeBoth
    merge(arr, si, ei);
}

int main()
{
    int arr[] = {1, 2, 3, 14, 5};
    int n = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}
