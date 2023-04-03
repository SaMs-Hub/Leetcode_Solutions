var reverseList = function(head) {
    let [prev, currentNode, next] = [null, head, null];

    while (currentNode){
        next = currentNode.next;
        currentNode.next = prev;

        prev = currentNode;
        currentNode = next;
    }

    return prev;
    
};
