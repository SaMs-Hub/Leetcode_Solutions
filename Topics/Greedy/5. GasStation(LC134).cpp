// App 1 O(n)

 int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();
    int g = cost.size();

    int totalCost = 0;
    int totalGas = 0;

    for (int i = 0; i < g; i++) totalCost += cost[i];
    for (int i = 0; i < n; i++) totalGas += gas[i];

    if (totalCost > totalGas) return -1;

    int total = 0;
    int result = 0;

    for (int i = 0; i < n; i++){
        total += gas[i] - cost[i];
        if (total < 0){
            total = 0;
            result = i + 1;
        }
    }

    return result;
    
        
    }
