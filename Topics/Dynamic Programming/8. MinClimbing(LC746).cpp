// App 1 DP O(n)
int minCostClimbingStairs(vector<int>& cost) {
    int costOne = 0;
    int costTwo = 0;


    // iterating till cost[3] for top floor
    for (int i = 2; i <= cost.size(); i++){
       
        int temp = costOne;
        costOne = min(costOne + cost[i - 1], costTwo + cost[i - 2]);
        costTwo = temp;
    }
    return costOne;
        
    }
