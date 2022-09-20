#include <bits/stdc++.h>
using namespace std;

// Indicates how close/far is the array to get sorted
int inversionCount(vector<int> &array)
{
    int count = 0;
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[i] > array[j])
            {
                count += 1;
            }
        }
    }

    return count;
}

int main()
{
    vector<int> arr{1, 8, 3, 4};

    cout << inversionCount(arr);
}
