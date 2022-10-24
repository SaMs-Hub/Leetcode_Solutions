// App 1 
 int minMeetingRooms(vector<vector<int>> &intervals) {
    int n = intervals.size();

    vector<int> start = {};
    vector<int> end = {};

    int i = 0;
    while (i < n){
        start.push_back(intervals[i][0]);
        end.push_back(intervals[i][1]);
        i++;

    }  

    sort(start.begin(), start.end());
    sort(end.begin(), end.end());

    int s = 0;
    int e = 0;

    int result = 0;
    int count = 0;

    while (s < n){
        if (start[s] < end[e]){
            s++;
            count++;
        }else{
            e++;
            count--;

        }

        result = max(result, count);
    }
    return result;


    }
