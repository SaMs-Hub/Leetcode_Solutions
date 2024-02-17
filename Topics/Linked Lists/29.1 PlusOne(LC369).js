const addOne = (head) => {
  if (head === null) {
    return 1;
  }

  let carry = addOne(head.next);
  let sum = head.data + carry;
  head.data = sum % 10;
  carry = parseInt(sum / 10);
  return carry;
};

const addOneNode = (head) => {
  const carry = addOne(head);

  if (carry === 1) {
    let newNode = new Node(carry);
    newNode.next = head;
    head = newNode;
  }

  return head;
};
