/* Use this Queue class
class Queue {
	Queue (int capacity)
	int size()
	boolean isEmpty()
	int front()
	int back()
	void push(int element)
	void pop()
};
*/

// Implement the Stack class
class Stack {
public:
	int capacity;
	Queue *queue;
	
	Stack (int capacity) {
		this->capacity = capacity;
		queue = new Queue(capacity);
		
	}

	bool isEmpty() {
		return queue->isEmpty();
		
	}
	
	int size() {
		return queue->size();
		
	}
	
	int top() {
		return queue->front();
		
	}
	
	void push(int element) {
		queue->push(element);
		for (int i = 1; i < queue->size(); i++){
			queue->push(queue->front());
			queue->pop();
		}
		
	}
	
	void pop() {
		return queue->pop();
		
	}
};
