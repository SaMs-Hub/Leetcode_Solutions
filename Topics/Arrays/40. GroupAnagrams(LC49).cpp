// App 1 - Hashmaps O(n)
class Solution {
public:
   string getKey(string str){
    vector<int> count(26);
    for (int i = 0; i < str.size(); i++){
        count[str[i] - 'a']++;
    }

    string key = "";
    for (int i = 0; i < 26; i++){
        key.append(to_string(count[i] + 'a'));
    }
    return key;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mes;
    for (int i = 0; i < strs.size(); i++){
        string key = getKey(strs[i]);
        mes[key].push_back(strs[i]);
    }

    vector<vector<string>> result;
    for (auto it = mes.begin(); it != mes.end(); it++){
        result.push_back(it->second);
    }
    return result;

 }
};
