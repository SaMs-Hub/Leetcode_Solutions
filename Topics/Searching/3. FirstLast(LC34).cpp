// App 1 - Naive

vector<int> searchRange(vector<int>& arr, int target) {
         int first =-1;
        int last = -1;
        
        for (int i = 0; i < arr.size(); i++){
            if (first == -1 && arr[i] == target){
                first = i;
            }
            
            if (arr[i] == target){
                last = i;
            }
        }
        return {first, last};
    }

// App 2 - 
