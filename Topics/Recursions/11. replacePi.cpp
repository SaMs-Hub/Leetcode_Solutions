#include <bits/stdc++.h>
using namespace std;

void replacePi(char *arr, int i)
{
    // base case
    if (arr[i] == '\0' or arr[i + 1] == '\0')
    {
        return;
    }

    // check for pi at current location
    if (arr[i] == 'p' and arr[i + 1] == 'i')
    {
        // shift j element by 2 and take to end of array
        int j = i + 2;
        while (arr[j] != '\0')
        {
            j++;
        }

        // shift from right to left
        while (j >= i + 2)
        {
            arr[j + 2] = arr[j];
            j--;
        }

        // replace pi chars
        arr[i] = '3';
        arr[i + 1] = '.';
        arr[i + 2] = '1';
        arr[i + 3] = '4';

        replacePi(arr, i + 4);
    }
    else
    {
        // make a call for next
        replacePi(arr, i + 1);
    }
}

int main()
{
    char arr[1000] = "hellopinpi";
    int i = 0;

    replacePi(arr, i);
    cout << arr;
}
