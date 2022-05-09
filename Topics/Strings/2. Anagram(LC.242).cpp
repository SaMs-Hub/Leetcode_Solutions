// Appraoch 1 - Using Sorting

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string A, string B){
    // check the size, if not equal return false
    if (A.size() != B.size()){
        return false;
    }
    // sort them and return
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    return A == B;
}


int main()
{
    string A = "hello";
    string B = "elhol";

    cout << isAnagram(A, B);
    return 0;
}
