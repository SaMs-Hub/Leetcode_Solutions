ListNode* flattenTheLinkedList(ListNode* root) {
	vector<ListNode*> columns;
	ListNode* currentNode = root;
	ListNode* head = new ListNode(INT_MAX);
	int i = 0, index;
	while(currentNode != NULL) {
		columns.push_back(currentNode);
		if (head->data > currentNode->data) {
			head->data = currentNode->data;
			index = i;
		}
		i++;
		currentNode = currentNode->next;
	}
	columns[index] = columns[index]->down;
	currentNode = head;
	while (1) {
		int endOfList = 1;
	    index = - 1;
		ListNode* currentMin = new ListNode(INT_MAX);
		for (int i = 0; i < columns.size(); i++) {
			if(columns[i] == NULL) {
				continue;
			}
			if(columns[i]->data < currentMin->data) {
				currentMin = columns[i];
				index = i;
				endOfList = 0;
			}
		}
		if (endOfList == 1) {
			break;
		}
		currentNode->next = currentMin;
		currentNode = currentMin;
		columns[index] = columns[index]->down;
	}
	return head;
}
