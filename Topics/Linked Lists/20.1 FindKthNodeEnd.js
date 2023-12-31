const findKthNode = (head, k) => {
    let currentNode = head;

    let length = 0;
    while (currentNode != null) {
        currentNode = currentNode.next;
        length += 1;
    }

    let number = length - k

    if (number < 0) {
        return -1;
    }

    let current = 0;
    currentNode = head;
    while (current < number) {
        currentNode = currentNode.next;
        current += 1;
    }

    return currentNode.data;
}
