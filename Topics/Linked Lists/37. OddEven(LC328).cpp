
// App 1 - Traversing once - Two Pointers O(n)
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head or !head->next or !head->next->next) return head;

    ListNode* odd = head, *even = head->next, *evenStart = head->next;

    while (odd->next && even->next){
        // get all odds one at one place
        odd->next = even->next;

        // get all evens at one place
        even->next = odd->next->next;

        // increment
        odd = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    return head;
        
    }
};


