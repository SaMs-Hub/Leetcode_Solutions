#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(int *arr, int n){
    // create an vector to store output
    vector<int> output;

    // create an map to store visited
    unordered_map<int, bool> visited;
    

    // traverse through array to check if number visited
    for (int i = 0; i < n; i++){
        if (visited.count(arr[i]) > 0){
            continue;
        }
        visited[arr[i]] = true;
        output.push_back(arr[i]);
    }

    // if not visited, push back to output, return output
    return output;
}


int main()
{
    int arr[] = {1, 2, 2, 3, 1, 2, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> output = removeDuplicates(arr, n);

    for (int i = 0; i < output.size(); i++){
        cout << output[i] << endl;
    }
    return 0;
}
