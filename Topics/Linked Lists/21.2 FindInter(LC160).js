// App 1 - While Loop
var getIntersectionNode = function(headA, headB) {
    let tempHead;
    while (headA){
        tempHead = headB
        while (tempHead){
            if (headA == tempHead) return headA;
            tempHead = tempHead.next;
        }
        headA = headA.next;
    }

    return null;
    
};


// App 2 - Optimised
var getIntersectionNode = function(headA, headB) {
   let [head1, head2] = [headA, headB];

   while (head1 !== head2){
       if (!head1) head1 = headB;
       else head1 = head1.next;

        if (!head2) head2 = headA;
       else head2 = head2.next;

   }

   return head1;
    
};


// https://leetcode.com/problems/intersection-of-two-linked-lists/description/
