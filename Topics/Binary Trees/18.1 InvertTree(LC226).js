// DFS O(n)
var invertTree = function(root) {
    if (root === null) return root;

    const leftTree = invertTree(root.left);
    const rightTree = invertTree(root.right);

    root.left = rightTree;
    root.right = leftTree;

    return root;
    
};
