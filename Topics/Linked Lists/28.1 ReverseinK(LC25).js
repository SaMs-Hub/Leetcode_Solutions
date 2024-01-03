
var reverseKGroup = function(head, key) {
      let currentNode = head;
    let length = 0;

    // finding length
    while (currentNode !== null && length < key) {
        currentNode = currentNode.next;
        length += 1;
    }

    // base edge case
    if (length < key) {
        return head;
    }

    let prevNode = null;
    let nextNode;

    currentNode = head;

    let currentCount = 0;
    while (currentCount < key) {
        nextNode = currentNode.next;
        currentNode.next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode
        currentCount += 1;
    }

    head.next = reverseKGroup(nextNode, key);

    return prevNode;

}

// https://leetcode.com/problems/reverse-nodes-in-k-group/description/
