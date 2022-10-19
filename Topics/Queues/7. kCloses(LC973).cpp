// App 1 PQ O(n)
class Solution {
public:
   
int getDistance(vector<int> &points){
    return pow(points[0], 2) + pow(points[1],2);
}

int partition(vector<vector<int>> &points, int low, int high){
    vector<int> pivot = points[low + (high - low)/2];
    int pivotDistance = getDistance(pivot);

    while (low < high){
        if (getDistance(points[low]) >= pivotDistance){
            swap(points[low], points[high]);
            high--;
        }else low++;
    }

    if (getDistance(points[low]) < pivotDistance) low++;
    return low;
}

vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
{
    int low = 0;
    int high = points.size() - 1;

    int pivotIndex = points.size();

    while (pivotIndex != k){
        pivotIndex = partition(points, low, high);
        if (pivotIndex < k) low = pivotIndex;
        else high = pivotIndex - 1;
    }

    return vector<vector<int>>(points.begin(), points.begin() + k);
}


};
