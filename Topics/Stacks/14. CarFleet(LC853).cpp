// App 1 Using Vectors O(n)
class Solution {
public:
int carFleet(int target, vector<int>& position, vector<int>& speed) {
    int n = position.size();

    vector<pair<int, double>> cars;
    
    for (int i = 0; i < n; i++){
        double time = (double)(target - position[i])/speed[i];
        cars.push_back({position[i], time});
    }

    sort(cars.begin(), cars.end());

    double maxTime = 0.0;
    int result = 0;

    for (int i = n - 1; i >= 0; i--){
        double time = cars[i].second;
        if (time > maxTime){
            maxTime = time;
            result += 1;
        }
    }
    return result;

}
};


// App 2 - Using stack
class Solution {
public:
int carFleet(int target, vector<int>& position, vector<int>& speed) {
    stack<float> fleets;
        vector<pair<int, float>> pos_time; 
         
        for(int i = 0; i < position.size(); i++)
            pos_time.push_back({ position[i], float(target - position[i]) / speed[i] });
        
        sort(pos_time.begin(), pos_time.end());

    
        for(int i = 0; i < position.size(); i++){
            float fleet_i = pos_time[i].second;
         
            while(fleets.size() && (fleet_i >= fleets.top()))
                fleets.pop();
            
            fleets.push(fleet_i);
        }
        
        return fleets.size();

}
};
