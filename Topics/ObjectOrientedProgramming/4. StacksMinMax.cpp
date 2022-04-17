#include <bits/stdc++.h>
using namespace std;

class MinMaxStack{
	vector<int> stack;
	vector<int> maxStack;
	vector<int> minStack;

	public:
		void push(int data){
			int currMin = data;
			int currMax = data;

			if (minStack.size()){
				currMin = min(minStack[minStack.size() - 1], data);
				currMax = max(maxStack[maxStack.size() - 1], data);
			}

			minStack.push_back(currMin);
			maxStack.push_back(currMax);
			stack.push_back(data);
		}

		int top(){
			return stack[stack.size() - 1];
		}

		void pop(){
			minStack.pop_back();
			maxStack.pop_back();
			stack.pop_back();
		}

		bool empty(){
			return stack.size() == 0;
		}

		int getMax(){
			return maxStack[maxStack.size() - 1];

		}

		int getMin(){
			return minStack[minStack.size() - 1];
		}


};


int main()
{
	MinMaxStack s;
	for (int i = 0; i <= 4; i++){
		s.push(i);
	}

	cout << s.getMax() << endl;
	s.pop();
	cout << s.getMin() << endl;

	cout << s.top() << endl;
	cout << s.getMax() << endl;

	return 0;
}
