class TreeNode {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

class BinarySearchTree {
  constructor() {
    this.root = null;
  }

  insert(value) {
    const newNode = new TreeNode(value);

    if (!this.root) {
      this.root = newNode;
    } else {
      this.insertNode(this.root, newNode);
    }
  }

  insertNode(node, newNode) {
    if (newNode.value < node.value) {
      if (!node.left) {
        node.left = newNode;
      } else {
        this.insertNode(node.left, newNode);
      }
    } else {
      if (!node.right) {
        node.right = newNode;
      } else {
        this.insertNode(node.right, newNode);
      }
    }
  }

  buildFromArray(arr) {
    arr.forEach((value) => this.insert(value));
  }

  inOrderTraversal(node, result) {
    if (node) {
      this.inOrderTraversal(node.left, result);
      result.push(node.value);
      this.inOrderTraversal(node.right, result);
    }
  }

  toArray() {
    const result = [];
    this.inOrderTraversal(this.root, result);
    return result;
  }
}

const lowestCommonAncestor = (root, p, q) => {
  if (!root || !p || !q) {
    return null;
  }

  if (p.value < root.value && q.value < root.value) {
    return lowestCommonAncestor(root.left, p, q);
  } else if (p.value > root.value && q.value > root.value) {
    return lowestCommonAncestor(root.right, p, q);
  }

  return root;
};

const valuesArray = [1, 2];
const bst = new BinarySearchTree();

bst.buildFromArray(valuesArray);

const resultArray = bst.toArray();

console.log(resultArray, bst.root.value);
