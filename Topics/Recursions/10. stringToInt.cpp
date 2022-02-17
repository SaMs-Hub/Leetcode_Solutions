#include <bits/stdc++.h>
using namespace std;

int stringToInt(char arr[], int n){
    // base case
    if (n == 0){
        return 0;
    }

    // into smaller
    int digit = arr[n - 1] - '0';
    int smallerOutput = stringToInt(arr, n - 1);
    return smallerOutput * 10 + digit;


}

int main(){
    char arr[] = "1234";
    int n = strlen(arr);

    cout << stringToInt(arr, n);
}
