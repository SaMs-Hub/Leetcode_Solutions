// O(n) 

  

int dfs(TreeNode* root, int &maxPath){
	if (!root) return 0;

	int left = max(dfs(root->left, maxPath), 0);
	int right = max(dfs(root->right, maxPath), 0);

	int currentPath = root->val + left + right;

	maxPath = max(maxPath, currentPath);

	return root->val + max(left, right);
}
    
    
 int maxPathSum(TreeNode* root) {
		int maxPath = INT_MIN;
		dfs(root, maxPath);
		return maxPath;
        
    }
};
