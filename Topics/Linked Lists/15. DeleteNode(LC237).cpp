void deleteNode(ListNode* node) {
	// store nodeNext in newNode
    ListNode* newNode = node->next;
	
	  // store newNodeData in NdoeData
	node->data = newNode->data;
	
	 // store newNdoeNext in ndoeNext;
	node->next = newNode->next;
}
