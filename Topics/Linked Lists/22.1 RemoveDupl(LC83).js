const removeDuplicates = (head) => {
  let currentNode = head;

  while (currentNode !== null && currentNode.next !== null) {
    while (
      currentNode.next !== null &&
      currentNode.data === currentNode.next.data
    ) {
      currentNode.next = currentNode.next.next;
    }

    currentNode = currentNode.next;
  }

  return head;
};
