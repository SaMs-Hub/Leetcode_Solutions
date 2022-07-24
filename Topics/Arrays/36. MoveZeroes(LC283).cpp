// App 1 - BF
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        vector<int> temp;
    int count = 0;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] != 0){
            temp.push_back(arr[i]);
        }else{
            count += 1;
        }
    }

    for (int i = 0; i < count; i++){
        temp.push_back(0);
    }

    for (int i = 0; i < temp.size(); i++){
        arr[i] = temp[i];
    }
   
        
    }
};


// App 2 - Two Pointers
void moveZeroes(vector<int>& arr) {
       int n = arr.size();
    int i = 0;
    int j = 1;

    while (j < n){
        if (arr[i] == 0 && arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }else if(arr[i] == 0 && arr[j] == 0) j++;
        else{
            i++;
            j++;
        }
    }
    }
