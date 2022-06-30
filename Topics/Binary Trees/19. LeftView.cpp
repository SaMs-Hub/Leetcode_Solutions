 vector<int> leftView(Node* root){
	queue<Node*> q;
	q.push(root);
	vector<int> result;

	while (!q.empty()){
		int n = q.size();
		for (int i = 0;i < n; i++){
			Node* currentNode = q.front();
			q.pop();

			if (i == 0){
				result.push_back(currentNode->data);
			}

			if (currentNode->left) q.push(currentNode->left);
			if (currentNode->right) q.push(currentNode->right);

		}
	}
	return result;

}
