// App 1 - O(nlogn)

 bool canAttendMeetings(vector<vector<int>> &intervals) {
       int n = intervals.size();
       if (n == 1) return true;

       int currentCount = 0;

       sort(intervals.begin(), intervals.end());

       while (currentCount < n- 1){
         if(intervals[currentCount][1] > intervals[currentCount + 1][0]){
            return false;
         }

         currentCount++;
       }
       return true;


    }

int main(){
    
    vector<vector<int>> nums = {{0,30},{5,10},{15,20}};

    cout << canAttendMeetings(nums) << endl;

    return 0;
}
