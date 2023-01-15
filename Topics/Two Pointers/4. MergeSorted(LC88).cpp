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
       

       	int k = ( m + n) - 1;

	int i = m - 1;
	int j = n - 1;

	while (i >= 0 && j >= 0){
		if (nums1[i] > nums2[j]){
			nums1[k] = nums1[i];
			k--;
			i--;
		}else{
			nums1[k] = nums2[j];
			k--;
			j--;
		}
	}

	// for remaining element in 2nd array
	while (j >= 0){
		nums1[k] = nums2[j];
		k--;
		j--;
	}
        
    }
    
    
Ex: sit monkeys along with their age


