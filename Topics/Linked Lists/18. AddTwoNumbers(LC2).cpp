// App 1 - Iterative
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



// App 2 - Recursive
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
ListNode* add(ListNode* A, ListNode* B, int carry = 0){
    if (!A and !B){
        if(carry > 0) return new ListNode(carry);
        return NULL;
    }

    int val1 = A ? A->val: 0;
    int val2 = B ? B->val : 0;

    int sum = val1 + val2 + carry;

    ListNode* currentListNode = new ListNode(sum%10);
    currentListNode->next = add(A?A->next: A, B?B->next: B, sum/10);
    return currentListNode;
}

ListNode* addTwoNumbers(ListNode* A, ListNode* B){
    if (!A) return B;
    if (!B) return A;

    return add(A, B);
}
    
};


// Using JS

var add = function(l1,l2, carry = 0){
    if (!l1 && !l2){
        if (carry > 0) return new ListNode(carry);
        return null;
    }

    let val1 = l1 ? l1.val : 0;
    let val2 = l2 ? l2.val : 0;

    let sum = val1 + val2 + carry;

    let currentListNode = new ListNode(sum%10);
    currentListNode.next = add(l1 ? l1.next : l1, l2 ? l2.next : l2, Math.floor(sum / 10));

    return currentListNode;
}
var addTwoNumbers = function(l1, l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    return add(l1, l2);
};
