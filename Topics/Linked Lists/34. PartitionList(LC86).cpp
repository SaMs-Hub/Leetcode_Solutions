*/
class Solution {
public:
    ListNode* partition(ListNode* head, int key) {
   ListNode* smallerHead = NULL, *equalHead = NULL, *greaterHead = NULL;
	ListNode* smallerLast = NULL, *equalLast = NULL, *greaterLast = NULL;
	while (head != NULL) {
		if (head->val < key) {
			if(smallerHead == NULL) {
				smallerHead = smallerLast = head;
			} else {
				smallerLast->next = head;
				smallerLast = smallerLast->next;
			} 
		} else if (head->val == key) {
			if (equalHead == NULL) {
				equalHead = equalLast = head;
			} else {
				equalLast->next = head;
				equalLast = equalLast->next;
			}
		} else {
			if (greaterHead == NULL) {
				greaterHead = greaterLast = head;
			} else {
				greaterLast->next = head;
				greaterLast = greaterLast->next;
			}
		}
		head = head->next;
	}
	if (greaterHead != NULL) {
		greaterLast->next = NULL;
	}
	if (equalHead == NULL) {
		if (smallerHead == NULL) {
			smallerHead = greaterHead;
		} else {
			smallerLast->next = greaterHead;
		}
	} else {
		equalLast->next = greaterHead;
		if (smallerHead == NULL) {
			smallerHead = equalHead;
		} else {
			smallerLast->next = equalHead;
		}
	}
	return smallerHead;
}

};
