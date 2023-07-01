// APp 1 - O(n)
 vector<int> majorityElement(vector<int>& arr) {
         unordered_map<int, int> occurences;
    vector<int> result = {};

    int i = 0, n = arr.size();

    for (auto x : arr)
    {
        occurences[x] += 1;
        if (occurences[x] > n / 3){
              auto val = find(result.begin(), result.end(), x);
            if (val == result.end())
                result.push_back(x);
        }
    }
    return result;}
