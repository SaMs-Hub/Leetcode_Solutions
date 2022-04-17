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
