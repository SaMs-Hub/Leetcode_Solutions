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
    ListNode* addTwoNumbers(ListNode* h1, ListNode* h2) {
        ListNode* head = NULL;
    ListNode* prev = NULL;

    int carry = 0;
    while (h1 != NULL or h2 != NULL){
        int value1 = h1 != NULL ? h1->val : 0;
        int value2 = h2 != NULL ? h2->val: 0;

        int sum = value1 + value2 + carry;

        carry = sum/10;
        int value = sum%10;

        ListNode* currentNode = new ListNode(value);

        if (head == NULL){
            head = currentNode;
        }

        if (prev != NULL){
            prev->next = currentNode;
        }

        prev = currentNode;

        h1 = h1 != NULL ? h1->next : NULL;
        h2 = h2 != NULL ? h2->next : NULL;

    }

    if (carry > 0){
        ListNode* extraNode = new ListNode(carry);
        prev->next = extraNode;
    }

    return head;
        
        
    }
};
