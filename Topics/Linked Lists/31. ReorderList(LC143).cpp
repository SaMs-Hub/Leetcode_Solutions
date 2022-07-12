// App 1 - Brute Force - O(n2)
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* currentNode = head;
	while (currentNode != NULL) {
		ListNode* last = currentNode;
		while (last != NULL && last->next != NULL && last->next->next != NULL) {
			last = last->next;
		}
		if (currentNode == last) {
			break;
		}
		last->next->next = currentNode->next;
		currentNode->next = last->next;
		currentNode = currentNode->next->next;
		last->next = NULL;
	}
	return;
    }
};


// App 2 - Two Pointers O(n)

class Solution {
public:ListNode* reverse(ListNode* head){
    ListNode* prevListNode = NULL;
    ListNode* currentListNode = head;
    ListNode* nextListNode;

    while (currentListNode != NULL){
        nextListNode = currentListNode->next;
        currentListNode->next = prevListNode;
        prevListNode = currentListNode;

        currentListNode = nextListNode;
    }

    return prevListNode;
}

void reorderList(ListNode* head){
    if (head == NULL){
        return;
    }

    ListNode* slow = head;
     ListNode* fast = head->next;

    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }  

    ListNode* firstHalf = head, *secondHalf = slow->next;
    slow->next = NULL;
    secondHalf = reverse(secondHalf);

    while (firstHalf != NULL && secondHalf != NULL){
        ListNode* temp = secondHalf->next;
        secondHalf->next = firstHalf->next;
        firstHalf->next = secondHalf;
        secondHalf = temp;

        firstHalf = firstHalf->next->next;
    }
    return;
}

};
