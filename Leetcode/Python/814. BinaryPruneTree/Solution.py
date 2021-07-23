# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pruneTree(self, root, parent = None):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        if not root: return
        left = self.pruneTree(root.left, root)
        right = self.pruneTree(root.right, root)
        if not left and not right and root.val == 0:
            if parent and parent.left == root: parent.left = None
            elif parent and parent.right == root: parent.right = None
            return 
        else: return root
