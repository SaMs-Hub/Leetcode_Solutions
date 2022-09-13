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


