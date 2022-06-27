/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
ListNode* reverse(ListNode* head){
    ListNode* prev = NULL;
    ListNode* currentNode = head;

    while (currentNode  != NULL){
        ListNode* nextNode = currentNode->next;
        currentNode->next = prev;
        prev = currentNode;
        currentNode = nextNode;
    }
    return prev;
}


ListNode* reverseBetween(ListNode* head, int left, int right) {
	ListNode* leftNode;
    ListNode* rightNode;

    ListNode* currentNode = head;

    // traverse till adress of left, right
    int i = 1;
    while (currentNode != NULL){
        if (i > right){
            break;
        }
        if (i < left){
            leftNode = currentNode;
        }
        if (i == right){
            rightNode = currentNode;
        }
        i += 1;
        currentNode = currentNode->next;
    }

    rightNode->next = NULL;
    if (left == 1){
        rightNode = head;
        head = reverse(head);
    }else{
        rightNode = leftNode->next;
        leftNode->next = reverse(leftNode->next);
    }

    rightNode->next = currentNode;
    return head;
}
};
