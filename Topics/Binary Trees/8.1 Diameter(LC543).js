// Recursive
const getHeight = (root) => {
    if (!root) return root;

    let leftHeight = getHeight(root.left);
    let rightHeight = getHeight(root.right);

    return Math.max(leftHeight, rightHeight) + 1;
}

const diameterOfBinaryTree = (root) => {
    if (!root) return 0;

    let leftHeight = getHeight(root.left);
    let rightHeight = getHeight(root.right);

    let completeHeight = leftHeight + rightHeight;
    let completeLeftDiameter = diameterOfBinaryTree(root.left);
    let completedRightDiameter = diameterOfBinaryTree(root.right);

    return Math.max(completeHeight, completeLeftDiameter, completedRightDiameter);
}
