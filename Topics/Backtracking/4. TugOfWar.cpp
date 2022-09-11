void getPartition(vector<int> arr, int selectedStudents, int start, int currSum, int totalSum){
    if (start == arr.size()) return;

    if (selectedStudents == arr.size()/2){
        minDiff = min(minDiff, abs(totalSum - 2 * currSum));
        return;
    }

    getPartition(arr, selectedStudents + 1, start + 1, currSum + arr[start], totalSum);
    getPartition(arr, selectedStudents, start + 1, currSum, totalSum);

}
int divideGroup(vector<int> &arr) {
    int totalSum = 0;
    for (auto x: arr){
        totalSum += x;
    }

    minDiff = INT_MAX;
    getPartition(arr, 0, 0, 0, totalSum);
    return minDiff;
   
}
