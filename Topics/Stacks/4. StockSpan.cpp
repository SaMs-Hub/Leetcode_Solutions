#include <bits/stdc++.h>
using namespace std;

void stockSpan(int *prices, int n, int *span){
	// make a stack to store indices
	// push 0 in the stack and let 1st element in span array be 1
	// travese ovre prices and check currentPrice
	// while stack is not empty and last price is less that currPrice
	// keep poping it
	// if stack not epmty store toMost in  prev Highest 
	// alot it to arr[i] - prevHig
	// ese increase span
	// and push element into the stack

	stack<int> s;
	s.push(0);

	span[0] = 1;

	for (int i = 1; i <= n - 1; i++){
		int currentPrice = prices[i];

		while (!s.empty() and prices[s.top()] <= currentPrice){
			s.pop();
		}

		if (!s.empty()){
			int prevHighest = s.top();
			span[i] = i - prevHighest;
		}else{
			span[i] = i + 1;
		}
		s.push(i);
	}

	

}



int main()
{
	int prices[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(prices)/sizeof(int);

	int span[100] = {0};
	stockSpan(prices, n, span);
	for (int i = 0; i <  n;i++){
		cout << span[i] << ",";
	} 
	return 0;
}
