// App 1 - Naive - Using 2nd helper stack to maintain the least element
class MinStack {
public:
    stack<int> stack1, stack2;
    void push(int x) {
		stack1.push(x);
		if (stack2.empty() or x <= getMin()) stack2.push(x);
		
    }
    void pop() {
		if(stack1.top() == getMin()) stack2.pop();
		stack1.pop();
	    
    }
    int top() {
		return stack1.top();
	    
    }
    int getMin() {
		return stack2.top();
	    
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 
 
 Ex: Min stack of monkeys
