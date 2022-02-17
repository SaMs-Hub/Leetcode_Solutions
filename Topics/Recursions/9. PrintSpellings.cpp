#include <bits/stdc++.h>
using namespace std;

char arr[][100] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printSpellings(int n){
    // base case
    if (n == 0){
        return;
    }

    // rec case to take split into smaller
    printSpellings( n/10);
    
    // print digit which is remainder
    int digit = n % 10;
    cout << arr[digit] << " ";

}

int main(){
    int n = 2048;
    printSpellings(n);
}  
