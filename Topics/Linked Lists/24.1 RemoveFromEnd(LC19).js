// App 1 - Naive
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


// App 2 - Two pointers

const removeNthFromEnd = (head, key) => {
    // make two pointers fast and slow

    let slow = head;
    let fast = head;

    // have gap between fast and slow of 1
    for (let i = 0; i < key; i++) {
           fast = fast.next;
    }

    if (fast === null){
        return head.next;
    }

    // keep doing this until fast is null
    while (fast.next !== null) {
        fast = fast.next;
        slow = slow.next;
    }
    // slow to slownextnext
    slow.next = slow.next.next

    return head;

}

// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
