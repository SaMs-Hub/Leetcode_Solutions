/* This is the Node class definition

class Node {
public:
    Node* left;
    Node* right;
    int data;

    Node(int data) {
        this->left = NULL;
        this->right = NULL;
        this->data = data;
    }
};
*/

// Approach 1 - Naive
vector<int> getPostorderTraversal(Node* root) {
    // add your logic here
	vector<int> v;
	
	if (root == NULL){
		return v;
	}
	
	vector<int> temp;
	
	if (root->left != NULL){
		temp = getPostorderTraversal(root->left);
		v.insert(v.end(), temp.begin(), temp.end());
	}
	
	if (root->right != NULL){
		temp = getPostorderTraversal(root->right);
		v.insert(v.end(), temp.begin(), temp.end());
	}
	v.push_back(root->data);
	
	return v;

}


// Approach 2 - Recursive

void postOrderPush(Node* root, vector<int> &arr){
    if (root == NULL){
        return;
    }

    
    postOrderPush(root->left, arr);
    postOrderPush(root->right, arr);    
    arr.push_back(root->data);
}

vector<int> postOrder(Node* root){
    vector<int> target;
    postOrderPush(root, target);
    return target;
}
