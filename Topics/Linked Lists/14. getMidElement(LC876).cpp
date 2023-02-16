
// Approach 1 

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


// Approach 2 - Two Pointers
int getMidElement(Node* head){
    if (head == NULL){
        return -1;
    }

    if (head->next == NULL){
        return head->data;
    }

    Node* slow = head;
    Node* fast = head;

    while (true){
        if (fast->next == NULL or fast->next->next == NULL){
            break;
        }

        fast = fast->next->next;
        slow = slow->next;
    }

    return slow->data;


}

// for getting 2nd elemnt if two mids
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head == NULL){
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        
       while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        return slow;
        
        
        
    }
};


// Two pointers JS
var middleNode = function(head) {
    
    var slow = head;
    var fast = head;
    
    while (fast && fast.next){
         slow = slow.next;
        fast = fast.next.next;
       
    }

    return slow;
    
};
