class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    // base case
    ListNode* prevNode = new ListNode(0);

    if (head == nullptr || head->next == nullptr){
        return head;
    }

    ListNode* currentNode = head;
    head = prevNode;

    while (currentNode != nullptr and currentNode->next != nullptr){
        if (currentNode->next != nullptr and currentNode->next->val == currentNode->val){
            while (currentNode->next != nullptr and currentNode->next->val == currentNode->val){
                currentNode = currentNode->next;
            }
            prevNode->next = currentNode->next;

        }else{
            prevNode->next = currentNode;
            prevNode = prevNode->next;

        }
        currentNode = currentNode->next;
    }
    return head->next;
}
};
