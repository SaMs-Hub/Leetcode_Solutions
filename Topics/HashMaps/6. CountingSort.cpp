void countingSort(vector<int> &arr) {
    int n = arr.size();

    vector<int> res(n + 1, 0);
    int maximum = 0;

    for (int i = 0; i < n; i++) maximum = max(arr[i], maximum);

    vector<int> count(2 * maximum + 2, 0);
    for (auto &x:arr) x += maximum;

    for (int i = 0; i < n; i++) count[arr[i]]++;
    for (int i = 1; i <= 2 * maximum + 1; i++) count[i] += count[i - 1];
    for (int i = 0; i < n; i++){
        res[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++) arr[i] = res[i] - maximum;
}
