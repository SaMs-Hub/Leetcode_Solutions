// O(n)
int maxProfit(vector<int> &prices)
{
	int sold = 0;
	int hold = INT_MIN;
	int rest = 0;

	for (int i = 0; i < prices.size(); i++)
	{
		int prevSold = sold;
		sold = hold + prices[i];
		hold = max(hold, rest - prices[i]);
		rest = max(rest, prevSold);
	}

	return max(sold, rest);
}
