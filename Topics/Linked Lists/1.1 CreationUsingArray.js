class Node {
  constructor() {
    this.data = 0;
    this.next = null;
  }
}
var root;

// Function to insert node
function insert(root, item) {
  var temp = new Node();
  temp.data = item;
  temp.next = root;
  root = temp;
  return root;
}

function display(root) {
  let arr = [];
  while (root != null) {
    arr.push(root.data);
    root = root.next;
  }

  console.log(arr);
}

function arrayToList(arr, n) {
  root = null;
  for (var i = n - 1; i >= 0; i--) root = insert(root, arr[i]);
  return root;
}


// Driver code
var arr = [1, 2, 3, 4];
var n = arr.length;
var root = arrayToList(arr, n);
display(root);
