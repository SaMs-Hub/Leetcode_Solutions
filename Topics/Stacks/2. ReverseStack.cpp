// Approach 1
#include <bits/stdc++.h>
using namespace std;

void transfer(stack<int> &s1, stack<int>&s2, int n){
	// traveerse over n calls
	// push elements into s2
	// pop s1 elements

	for (int i = 0; i < n; i++){
		s2.push(s1.top());
		s1.pop();
	}
}

void reverseStack(stack<int> &s1){
	 // create another stack for storing
	 // make a temp var x
	 // get the size of the stack and iterate over it
	 // pick 1st element from top and instert it it x
	 // pop it from stack
	 // transfet n - 1 - i elemetns from s1 to s2
	 // push x in s1
	 // transfer n - 1 - i elements from s2 to s1

	 stack<int> s2;
	 int x = -1;

	 int n = s1.size();

	 for (int i = 0; i < n; i++){
		 x = s1.top();
		 s1.pop();

		 transfer(s1, s2, n - 1 - i);
		 s1.push(x);
		 transfer(s2, s1, n - 1 - i);
	 }
}

int main()
{
	stack<int> s;
	for (int i = 81; i <= 90; i++){
		s.push(i);
	}

	reverseStack(s);
	while (!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}



// Approach 2 - Using Recusions
void insertAtBottom(stack<int> &s, int x){
	// base - if stack empty push x
	// else take out top, store it  and pop
	// call at smaller stock , push ata
	if (s.empty()){
		s.push(x);
		return;
	}

	int data = s.top();
	s.pop();

	insertAtBottom(s, x);
	s.push(data);
}

void reverseStack(stack<int> &s){
	// base case, if stack is empty return;
	// else take out the head and store it in a var and pop it
	// call the func on smallerStack and add it to bottom
	if(s.empty()){
		return;
	}

	int x = s.top();
	s.pop();

	reverseStack(s);
	insertAtBottom(s, x);

}

