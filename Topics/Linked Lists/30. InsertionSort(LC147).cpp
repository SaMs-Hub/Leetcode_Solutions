
class Solution {
public:
    ListNode* sortedHead;

void insertListNode(ListNode* head){
    if (sortedHead == NULL or sortedHead->val >= head->val){
        head->next = sortedHead;
        sortedHead = head;
        return;
    }

    ListNode* currentListNode = sortedHead;
    while (currentListNode->next != NULL and currentListNode->next->val < head->val){
        currentListNode = currentListNode->next;
    }

    head->next = currentListNode->next;
    currentListNode->next = head;
    return;
}

ListNode* insertionSortList(ListNode* head){
    sortedHead = NULL;
    ListNode* currentListNode = head;
    while (currentListNode != NULL){
        ListNode* nextListNode = currentListNode->next;
        insertListNode(currentListNode);
        currentListNode = nextListNode;
    }

    return sortedHead;
}

};
