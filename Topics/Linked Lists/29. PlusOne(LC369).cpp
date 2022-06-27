int addOneList(ListNode* &head){
    if (head == NULL){
        return 1;
    }

    int carry = addOneList(head->next);
    int sum = head->data + carry;
    head->data = sum % 10;
    carry = sum / 10;
    return carry;
}

ListNode* addOneToList(ListNode* head) {
	int carry = addOneList(head);
    if (carry == 1){
        ListNode* nextNode = new ListNode(carry);
        nextNode->next = head;
        head = nextNode;
    }

    return head;
}



