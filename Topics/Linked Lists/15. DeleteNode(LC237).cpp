void deleteNode(ListNode* node) {
	// store nodeNext in newNode
    ListNode* newNode = node->next;
	
	  // store newNodeData in NdoeData
	node->data = newNode->data;
	
	 // store newNdoeNext in ndoeNext;
	node->next = newNode->next;
}


// Using JS
var deleteNode = function(node) {
    var newNode = node.next;
    node.val = newNode.val;
    node.next = newNode.next;
    
};
