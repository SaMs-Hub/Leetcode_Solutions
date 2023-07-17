// Using two pointers

const reverseList = (head) => {
    let [prevNode, currentNode, nextNode] = [null, head, null];

    while (currentNode){
        nextNode = currentNode.next;

        currentNode.next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }

    return prevNode;
}
