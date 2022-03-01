#include <bits/stdc++.h>
using namespace std;

void move(int n, char src, char helper, char dest){
    if (n == 0){
        return;
    }

    move(n - 1, src, dest, helper);
    cout << "Shift Disk" << n << " from " << src << "to" << dest << endl;
    move(n - 1, helper, src, dest);
    // base case n is 0 return
    // rec case
    /// call with n - 1 from src to helper
    /// move it again from helper to dest
}

int main(){
    int n = 3;

    move(n, 'A', 'B', 'C');
    
}
