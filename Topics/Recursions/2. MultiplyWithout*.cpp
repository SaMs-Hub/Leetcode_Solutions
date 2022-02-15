#include <bits/stdc++.h>
using namespace std;

int multiply(int a, int b){
    // base case
    if (b == 1){
        return a;
    }
    
    // rec case
    int smallOutput = multiply(a, b - 1);
    return a + smallOutput;
}

int main(){
    int a = 4;
    int b = 5;

    cout << multiply(a, b);
}
