void removeLoop(ListNode* list) {
    if (list == NULL || list->next == NULL) {
		return;
	}
	ListNode *slowPtr = list->next, *fastPtr = list->next->next;
	ListNode *prevNode = list->next;
	while (fastPtr != NULL && fastPtr->next != NULL) {
		if(slowPtr == fastPtr) {
			slowPtr = list;
			break;
		}
		slowPtr = slowPtr->next;
		prevNode = fastPtr->next;
		fastPtr = fastPtr->next->next;
	}
	if (fastPtr == NULL || fastPtr->next == NULL) {
		return;
	}
	while (slowPtr != fastPtr) {
		prevNode = fastPtr;
		slowPtr = slowPtr->next;
		fastPtr = fastPtr->next;
	}
	prevNode->next = NULL;
	return;
}
