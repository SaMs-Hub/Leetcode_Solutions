
// App1 Recursion
int bSearch(vector<int>& nums, int target, int start, int end){
        if(end < start) return -1;
        int mid = (start+end)/2;
        // cout << mid << endl;
        if(nums[mid] == target){
            return mid;
        }else if(target < nums[mid]){
            return bSearch(nums, target, start, mid-1);
        }else{
            return bSearch(nums, target, mid+1, end);
        }
    }
    
    int search(vector<int>& nums, int target) {
        return bSearch(nums, target, 0, nums.size()-1);
    }


// Two pointers
int search(vector<int>& arr, int target) {
        int i = 0;
        int j = arr.size() - 1;

        while (i <= j){
            int mid = (i + j)/2;

            if (arr[mid] == target) return mid;
            else if (arr[mid] < target) i = mid +1;
            else j = mid - 1;
        }

        return -1;
    }
