// Using two pointers

var reverseList = function(head) {
    let [currentNode, prevNode, nextNode] = [head, null, null];

    while (currentNode) {
        nextNode = currentNode.next;

        currentNode.next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }

    return prevNode;

}
