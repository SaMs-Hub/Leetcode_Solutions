// App 1 - Naive

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



// App 2 - Hashmap
int getIdenticalTwinsCount(vector<int> &arr) {
    // make a map to store number and its frequency
   unordered_map<int, int> frequency;
   // traverse over arr, and keep add to freq
   for (auto x: arr){
       frequency[x]++;
   }
   // make a var to store count
   int count = 0;

   // traverse freq map, and keep adding its value to count
   for (auto y: frequency){
       count += (y.second * (y.second - 1)/2);
   }
   // return count
   return count;
}

