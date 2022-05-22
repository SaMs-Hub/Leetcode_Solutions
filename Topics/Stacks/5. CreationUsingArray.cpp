// Implement the Stack class
class Stack {
public:
	vector<int> stack;
	int topSack;
	int currSize;
	int capacity;
	
	Stack (int capacity) {
		this->capacity = capacity;
		topSack = -1;
		currSize = 0;
		stack.resize(this->capacity);
		
	}

	bool isEmpty() {
		return currSize == 0;
		
	}
	
	int size() {
		return currSize;
		
	}
	
	int top() {
		if (topSack < 0){
			return -1;
		}
		return stack[topSack];
		
	}
	
	void push(int element) {
		if (topSack >= capacity - 1){
			return;
		}
		topSack++;
		stack[topSack] = element;
		currSize += 1;
			
		
	}
	
	void pop() {
		if (topSack < 0){
			return;
		}
			topSack--;
			currSize--;
		
		
	}
};
