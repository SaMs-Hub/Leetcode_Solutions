class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *currentNode = head;

    while (currentNode != nullptr and currentNode->next != nullptr)
    {
        while (currentNode->next != nullptr and currentNode->val == currentNode->next->val)
        {
            currentNode->next = currentNode->next->next;
        }
        currentNode = currentNode->next;
    }
    return head;
    }
};
