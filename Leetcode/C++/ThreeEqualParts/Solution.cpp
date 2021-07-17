class Solution {
public:
    vector<int> threeEqualParts(vector<int>& a) {
    size_t n = a.size();
    int sum = std::accumulate(a.begin(), a.end(), 0);

    if (sum % 3 > 0)
      return {-1, -1};
    if (sum == 0)
      return {0, (int)n - 1};

    int i = n - 1, j, k;
    int cnt = 0, idx_2;
    while (cnt < sum / 3) {
      if (a[i--] == 1)
        cnt++;
    }
    j = i, idx_2 = ++i;
    cnt = 0;
    while (cnt < sum / 3) {
      if (a[j--] == 1)
        cnt++;
    }
    j++;
    while (a[k++] == 0);

    while (i < n) {
      if (a[i] != a[j] || a[i] != a[k])
        return {-1, -1};
      i++, j++, k++;
    }

    return {k - 1, j};
  }
};

auto speed_up = []() {
  ios_base::sync_with_stdio(false);
  return 0;   
}();
