// Using recursion

var maxDepth = function(root) {
     if (!root) return 0;
    
    let leftNode = maxDepth(root.left);
    let rightNode = maxDepth(root.right);
    
    return Math.max(leftNode, rightNode) + 1;
};
