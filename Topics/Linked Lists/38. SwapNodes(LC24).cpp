// Recursive

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head or !head->next ) return head;
        
        ListNode* currentNode = head->next;
        head->next = swapPairs(head->next->next);
        
        currentNode->next = head;
        return currentNode;
        
    }
};
