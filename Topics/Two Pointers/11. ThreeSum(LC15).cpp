// App 1 - Naive TLE
#include <bits/stdc++.h>
#define watch(x) cout << #x << " : " << x << endl
#define all(x) x.begin(), x.end()
#define rep(i, a, n) for (int i = a; i < n; i++)
#define rep0(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define pb push_back
#define out(x) cout << x << endl
#define outs(x) cout << x << " "
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0)
using namespace std;

void printArr(vector<vector<int>> res)
{
  for (int i = 0; i < res.size(); i++)
  {
    for (int j = 0; j < res[i].size(); j++)
    {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }
}

vector<vector<int>> threeSum(vector<int> arr)
{
  int n = arr.size();
  vector<vector<int>> res;
  set<vector<int>> temp;

  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      for (int k = j + 1; k < n; k++){
        if (arr[i] + arr[j] + arr[k] == 0){
          vector<int> triples = {arr[i], arr[j], arr[k]};
          sort(triples.begin(), triples.end());
          temp.insert(triples);
        }
      }
    }
  }

  for (auto x: temp) res.push_back(x);
  return res;
}
int main()
{

  vector<int> arr = {-1, 0, 1, 2, -1, -4};

  vector<vector<int>> res = threeSum(arr);

  printArr(res);
}


// App 2 - Two Pointers

vector<vector<int>> threeSum(vector<int> arr)
{
  int n = arr.size();
  vector<vector<int>> res;
  sort(arr.begin(), arr.end());

  for (int i = 0; i < n; i++){
    int j = i + 1;
    int k = n - 1;

    if (i > 0 && arr[i] == arr[i - 1]) continue;
    while (j < k){
      if (k < (n - 1) && arr[k] == arr[k + 1]){
        k -= 1;
        continue;
      }

      if (arr[i] + arr[j] + arr[k] > 0) k -= 1;
      else if (arr[i] + arr[j] + arr[k] < 0) j += 1;
      else{
        vector<int> triples = {arr[i], arr[j], arr[k]};
        sort(triples.begin(), triples.end());
        j += 1;
        k -= 1;
        res.push_back(triples);
      }
    }
  }
  return res;
}

Ex: Sum of ages of monkeys
