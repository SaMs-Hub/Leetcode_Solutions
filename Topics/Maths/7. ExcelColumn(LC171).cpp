// Naive O(n)
int getColumnNumber(string str){
    int power = 1;
    int res = 0;
    reverse(str.begin(), str.end());
    // cout << str << endl;
    for (auto x: str){
        res += (x - 'A' + 1) * power;
        power *= 26;
    }
    return res;
}
