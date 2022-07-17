// App1 - BF

ListNode* removekthElement (ListNode* head, int k) {
     // make var to store currnt index and make a tempNode poiting to head
    int index = 0;
    ListNode* currentNode = head;
	
	// base case if k is 1 return headNext
    if (k == 1){
        return head->next;
    }
    
    // while tempNode not null, keep iterating till k - 1, setting currentNode as currentNext
    while (currentNode != NULL){
       
        if (index == k - 1){
            break;
        }
        currentNode = currentNode->next;
	 index += 1;
    }
    // poing currentNext as currNExtNext
    currentNode->next = currentNode->next->next;


    // return head;
    return head;
}


// App 2 - Recursive
Node* getKthNode(Node* head, int key){
    if (!head) return NULL;

    if (key == 1){
        return head->next;
    }

    head->next = getKthNode(head->next, key - 1);

    return head;


}
