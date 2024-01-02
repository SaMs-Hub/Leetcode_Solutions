const removeNthFromEnd = (head, key) => {
    // find length of list
    let length = 0;
    let currentNode = head;

    while (currentNode !== null) {
        currentNode = currentNode.next;
        length += 1;
    }

    // try to find the node which needs to be deleted
    let toDelete = length - key;

    // Loop and try to go to one node before 
    let i = 1;
    currentNode = head;
    while (i < toDelete) {
        i += 1;
        currentNode = currentNode.next;

    }
    if (toDelete === 0) {
        head = head.next;
        return head;
    }

    // point that node to deleted + 1
    currentNode.next = currentNode.next.next;
    return head;

}
