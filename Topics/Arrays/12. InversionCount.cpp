
#include <bits/stdc++.h>
using namespace std;

int inversionCount(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                count += 1;
            }
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 5, 2, 6, 3, 0};
    int n = sizeof(arr) / sizeof(int);

    cout << inversionCount(arr, n);
}
