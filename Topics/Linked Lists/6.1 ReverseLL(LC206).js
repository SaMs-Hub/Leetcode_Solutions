// Start with previous as null and current as the head.
// Save the next node before changing the current node.
// Point the current node back to previous.
// Move previous to current.
// Move current to the saved next node.
// Repeat until current becomes null.
// Previous is now the new head.

const reverseList = (head) => {
  let previous = null;
  let current = head;

  while (current !== null) {
    let next = current.next;

    current.next = previous;

    previous = current;

    current = next;
  }

  return previous;
};
