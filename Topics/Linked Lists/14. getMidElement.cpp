
int getMiddleElementOfLinkedList (ListNode* head) {
	if (head == NULL){
        return -1;
    }

    if (head->next == NULL){
        return head->data;
    }
    

	// count the size of list
    int count = 0;
    ListNode* currentNode = head;
    while (currentNode != NULL){
        count += 1;
        currentNode = currentNode->next;
    }
    
	// if size is even, decrease by 1
    int mid = count/2;
    if (count % 2 == 0){
        mid--;
    }

	
	// iterate till mid and get back currentNodeData
    currentNode = head;
    int curr = 0;
    while (curr != mid){
        curr++;
        currentNode = currentNode->next;
    }

    return currentNode->data;
    

}
