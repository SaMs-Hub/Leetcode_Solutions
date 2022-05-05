// App1 
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1, pair<int, int> p2){
    // d1 by calling p1firt2 and d2 by p2second2
    // if d1 == d2 return based on coorinates
    int d1 = p1.first*p1.first + p1.second*p1.second;
    int d2 = p2.first*p2.first + p2.second*p2.second;

    if(d1 == d2){
        return p1.first < p2.first;
    }
    return d1 < d2;
}


int main()
{
    // make a vector with pairs v
    // take number of cars
    // iterate over cars, and get their coordinates
    // push them by making pair into v

    // by comparing sort them
    // print
    vector<pair<int,int>> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;

        v.push_back(make_pair(x,y));
    }

    sort(v.begin(), v.end(), compare);
    for (auto x: v){
        cout << x.first << ',' << x.second << endl;
    }
    return 0;
}
