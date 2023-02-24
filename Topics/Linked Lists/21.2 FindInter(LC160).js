var getIntersectionNode = function(headA, headB) {
   
    let f2;

    while (headA != null){
        f2 = headB
        while (f2 != null){
            if (headA == f2) return headA;
            f2 = f2.next;
        }

        headA = headA.next;
    }

    return null;
    
};
