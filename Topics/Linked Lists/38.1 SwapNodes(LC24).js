// Recursive soln
const swapPairs = (head) => {
  if (head === null || head.next === null) return head;

  let currentNode = head.next;

  head.next = swapPairs(head.next.next);

  currentNode.next = head;

  return currentNode;
};
