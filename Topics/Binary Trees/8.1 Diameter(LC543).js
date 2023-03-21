// Recursive
const getHeight = (root) => {
     if (!root) return root;

     let leftHeight = getHeight(root?.left);
     let rightHeight = getHeight(root?.right);

     return Math.max(leftHeight, rightHeight) + 1;

 }
var diameterOfBinaryTree = function(root) {
    if (root == null) return 0;

    let lH = getHeight(root?.left);
    let rH = getHeight(root?.right);

    let opt1 = lH + rH;
    let opt2 = diameterOfBinaryTree(root.left);
    let opt3 = diameterOfBinaryTree(root.right);

    return Math.max(opt1, Math.max(opt2, opt3))
};
