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
