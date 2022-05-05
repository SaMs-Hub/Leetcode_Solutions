#include <bits/stdc++.h>
using namespace std;


int main()
{
    // Creation
    vector<int> v1;
    vector<int> v2(5, 10);
    vector<int> v3(v2.begin(), v2.end());
    vector<int> v4{1, 2, 3, 4};


    //iterate
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << ",";
    }
    cout << endl;

    for (auto it=v3.begin(); it != v3.end(); it++){
        cout << (*it) << ",";
    }
    cout << endl;

    
    for (int x: v4){
        cout << x << ",";
    }
    cout << endl;
    
    // input
    int n = 5;
    for (int i = 0; i < n; i++){
        int number;
        cin >> number;

        v1.push_back(number);
    }
    for (int x: v1){
        cout << x << ',';
    }
    return 0;
}  
