class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int count = 0;
        ListNode* currentNode = head;
        
        while (currentNode != nullptr){
            count += 1;
            currentNode = currentNode->next;
        }
        
        int mid = count/2;
        
        currentNode = head;
        int curr = 1;
        while (curr < mid){
            curr += 1;
            currentNode = currentNode->next;
        }
        
        if (mid == 0){
            head = head->next;
            return head;
        }
        
        
       currentNode->next = currentNode->next->next;
        return head;
        
    }
};
