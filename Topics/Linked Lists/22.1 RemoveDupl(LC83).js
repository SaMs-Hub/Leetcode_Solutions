var deleteDuplicates = function(head) {
    let currentNode = head;
    while (currentNode != null && currentNode.next != null){
        while (currentNode.next != null && currentNode.val === currentNode.next.val){
            currentNode.next = currentNode.next.next;
        }


        currentNode = currentNode.next;
    }

    return head;
    
};
