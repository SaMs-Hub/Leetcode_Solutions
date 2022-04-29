#include <bits/stdc++.h>
using namespace std;

void reversed(string& str, int left, int right){
    // while left < right, swap their elements, increment left and decrement riht
    while (left < right){
        swap(str[left], str[right]);
        left  += 1;
        right -= 1;
    }
}

string reverseString(string str){
    // insert " " at the end of stirng and get its size
    str.insert(str.end(), ' ');
    int n = str.length();

    // get a var j to keep reversing i + 1
    int j = 0;
    for (int i = 0; i < n; i++){
        if (str[i] == ' '){
            reversed(str, j, i - 1);
            j = i + 1;
        }
    }

    // remove the added space
    str.pop_back();

    // reverse whole string again
    reversed(str, 0, str.length() - 1);
    return str;
}


int main()
{
     string str = "Hello World";
 
    // Function call
    string rev = reverseString(str);
 
    // Print the reversed string
    cout << rev;
   
}
