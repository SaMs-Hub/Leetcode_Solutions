vector<int> getPositiveCumulativeSum(vector<int> &nums) {

        vector<int> cumSum;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++){
        sum += nums[i];
        cumSum.push_back(sum);
    }
	
	vector<int> posSum;
	for (int i = 0; i < cumSum.size(); i++){
		if (cumSum[i] > 0){
			posSum.push_back(cumSum[i]);
		}
	}

    return posSum;
   
}
