const swapNodes = (head, k) => {
  let [tempNode, leftNode, rightNode] = [head, head, head];

  // handling left node
  while (k > 1) {
    tempNode = tempNode.next;
    k -= 1;
  }

  leftNode = tempNode;

  // handling right node
  while (tempNode.next) {
    tempNode = tempNode.next;
    rightNode = rightNode.next;
  }

  // swapping them
  let tmp = leftNode.val;
  leftNode.val = rightNode.val;
  rightNode.val = tmp;

  return head;
};
