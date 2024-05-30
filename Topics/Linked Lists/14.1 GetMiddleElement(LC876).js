// Two pointers - O(n)
const middleNode = (head) => {
  if (head === null) {
    return null;
  }

  let slow = head;
  let fast = head;

  while (fast !== null && fast.next !== null) {
    slow = slow.next;
    fast = fast.next.next;
  }

  return slow;
};
