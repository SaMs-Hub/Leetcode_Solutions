// App 1 - O(n2)

Node* constructTreeUtil(vector<int> &preOrder, int preOrderIndex, vector<int> &inOrder, int inOrderStart, int inOrderEnd){
    if (inOrderStart > inOrderEnd) return NULL;
    Node* currentNode = new Node(preOrder[preOrderIndex]);
    preOrderIndex += 1;

    if (inOrderStart == inOrderEnd) return currentNode;
    int currentNodeIndex = -1;

    for (int i = inOrderStart; i < inOrderEnd; i++){
        if (inOrder[i] == currentNode->data){
            currentNodeIndex = i;
            break;
        }
    }
    currentNode->left = constructTreeUtil(preOrder, preOrderIndex, inOrder, inOrderStart, currentNodeIndex - 1);
    currentNode->right = constructTreeUtil(preOrder, preOrderIndex, inOrder, currentNodeIndex + 1, inOrderEnd);
    return currentNode;
}

Node* constructTree(vector<int> &preOrder, vector<int> &inOrder){
    int preOrderIndex = 0;
    return constructTreeUtil(preOrder, preOrderIndex, inOrder, 0, inOrder.size() - 1);
}


// App 2 - Using maps
unordered_map<int, int> inorderIndex;
Node* constructTreeUtil(vector<int> &preorder, int &preorderIndex, vector<int> &inorder, int inorderStart, int inorderEnd) {
	if (inorderStart > inorderEnd) {
		return NULL;
	}
	Node* currNode = new Node(preorder[preorderIndex]);
	preorderIndex++;
	if (inorderStart == inorderEnd) {
		return currNode;
	}
	int currInorderIndex = inorderIndex[currNode->data];
	currNode->left = constructTreeUtil(preorder, preorderIndex, inorder, inorderStart, currInorderIndex - 1);
	currNode->right = constructTreeUtil(preorder, preorderIndex, inorder, currInorderIndex + 1, inorderEnd);
	return currNode;
}
Node* constructTree(vector<int> &preorder, vector<int> &inorder) {
	inorderIndex.clear();
    for (int i = 0; i < inorder.size(); i++){
        inorderIndex[inorder[i]] = i;
    }
	int preorderIndex = 0;
    return constructTreeUtil(preorder, preorderIndex, inorder, 0, inorder.size() - 1);
}
