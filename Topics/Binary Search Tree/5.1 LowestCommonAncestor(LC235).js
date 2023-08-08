// Recursion
var lowestCommonAncestor = function(root, p, q) {
     if (p.val < root.val && q.val < root.val){
        return lowestCommonAncestor(root.left, p, q);
     }
        else if (p.val > root.val && q.val > root.val){
            return lowestCommonAncestor(root.right, p, q);
        }
        
        return root;

};
    
    
