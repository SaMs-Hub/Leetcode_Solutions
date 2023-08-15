// Using DFS

var rightSideView = function(root) {
    
    let rightValues = [];
    
    getValues(root, 0, rightValues);
    
    return rightValues;
}

const getValues = (root, i, arr) => {
    if (!root) return;
    
    if (arr.length === i) arr.push(root.val);
    
    getValues(root.right, i + 1, arr);
    getValues(root.left, i + 1, arr);
}
