#include <bits/stdc++.h>
using namespace std;

int placeTiles(int n){
    // base case
    if (n <= 3){
        return 1;
    }


    // splitting into smaller
    int fn1 = placeTiles(n - 1);
    int fn2 = placeTiles(n - 4);

    // returning the value
    return fn1 + fn2;
}

int main(){
    int n = 4;
    cout << placeTiles(n);
}
