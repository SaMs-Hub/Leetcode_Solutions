#include <bits/stdc++.h>
using namespace std;

int power(int a, int b){
    // base case 
    if (b == 0){
        return 1;
    }


    // recursive case
    int smallOutput = power(a, b - 1);
    return a * smallOutput;

}

int main(){
    int a = 3;
    int b = 2;

    cout << power(a, b);
}
