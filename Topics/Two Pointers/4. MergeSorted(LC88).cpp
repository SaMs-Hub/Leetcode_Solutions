// App1 - Naive
class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
       

        for (int i = 0; i < n; i++){
            arr1[m + i] = arr2[i]; 
        }
        sort(arr1.begin(), arr1.begin() + m + n);
        
    }
};

// App2 - Two Pointers
 void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
       

        int k = (m + n) - 1;

        int i = m - 1;
        int j = n - 1;
        while (i >= 0 && j >= 0){
            if (arr1[i] > arr2[j]) arr1[k--] = arr1[i--];
            else arr1[k--] = arr2[j--];
        }

        while (j >= 0) arr1[k--] = arr2[j--];
        
    }


