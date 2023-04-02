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
