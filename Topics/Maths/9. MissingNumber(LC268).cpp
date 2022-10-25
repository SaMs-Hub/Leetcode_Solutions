// App 1 - O(nlogN)
class Solution {
public:
   int missingNumber(vector<int> &arr){
    
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int currentElement = n;
    for (int i = 0; i < n; i++){
        if (i != arr[i]){
            currentElement = i;
            break;
        }
    }
    return currentElement;
}
};


// App 2 XOR O(n)
class Solution {
public:

    int missingNumber(vector<int> &arr){
    int n = arr.size();

    int result = n;
    for (int i = 0; i < n; i++) result = result ^ i ^ arr[i];
    return result;

}
};

