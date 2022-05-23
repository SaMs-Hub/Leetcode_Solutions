class Stack {
public:
	ListNode* topTrack;
	int stackSize;
	int stackCapacity;
	
	Stack (int capacity) {
		topTrack = NULL;
		stackSize = 0;
		stackCapacity = capacity;
		
	}

	bool isEmpty() {
		return topTrack == NULL;
		
	}
	
	int size() {
		return stackSize;
		
	}
	
	int top() {
		if (!isEmpty()){
			return topTrack->data;
		}
			return -1;
		
		
	}
	
	void push(int element) {
		ListNode* temp = new ListNode(element);
		temp->data = element;
		temp->next = topTrack;
		topTrack = temp;
		stackSize+= 1;
		
	}
	
	void pop() {
		if (topTrack == NULL){
			return;
		}
		
		topTrack = topTrack->next;
		stackSize--;
		
	}
};
