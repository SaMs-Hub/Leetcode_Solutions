string encode(vector<string> &strs)
{
    string result = "";

    for (auto x : strs)
    {
        string str = x;
        result += to_string(str.size()) + "#" + str;
    }
    return result;
}

vector<string> decode(string s)
{
        vector<string> result;

        int i = 0;

        int n = s.size();
        while (i < n){
            int j = i;
            while (s[j] != '#') j++;

            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            result.push_back(str);
            i = j + 1 + length;
        }
        return result;


}
