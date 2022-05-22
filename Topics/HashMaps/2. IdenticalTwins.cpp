#include <bits/stdc++.h>
using namespace std;

int getIdenticalTwins(vector<int> arr)
{
    // get var count to store count
    int count = 0;
    // travese i from 0 to end

    for (int i = 0; i < arr.size(); i++)
    {
        // travese j from 1 to end
        for (int j = i + 1; j < arr.size(); j++)
        {
            // if they are equal count++
            if (arr[i] == arr[j])
            {
                count += 1;
            }
        }
    }

    // return count
    return count;
}

int main()
{
    vector<int> arr{6,1,2,2,3,2,1};
    cout << getIdenticalTwins(arr);
    return 0;
}
