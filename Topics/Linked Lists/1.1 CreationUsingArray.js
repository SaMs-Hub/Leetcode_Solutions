class Node {
  constructor() {
    this.data = 0;
    this.next = null;
  }
}

const insert = (root, item) => {
  const temp = new Node();
  temp.data = item;
  temp.next = root;
  root = temp;
  return root;
};

const display = (root) => {
  const temp = [];

  while (root != null) {
    temp.push(root.data);
    root = root.next;
  }

  console.log(temp);
};

const arrToLinkedList = (arr) => {
  let root = null;
  const n = arr.length;
  for (let i = n - 1; i >= 0; i--) {
    root = insert(root, arr[i]);
  }

  return root;
};

const arr = [1, 2, 3, 4, 5];
const root = arrToLinkedList(arr);
display(root);
