// DFS O(n)
const invertTree = (root) => {
    if (!root) return root;

    let leftTree = invertTree(root.left);
    let rightTree = invertTree(root.right);

    root.left = rightTree;
    root.right = leftTree;

    return root;
}
