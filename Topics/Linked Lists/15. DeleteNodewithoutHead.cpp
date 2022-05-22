void deleteNode(ListNode* node) {
	// store nodeNext in newNode
    ListNode* newNode = node->next;
	
	// get prevNodedata in nextNodeData
	node->data = newNode->data;
	
	// point prevNode to nextNode
	node->next = newNode->next;
}
