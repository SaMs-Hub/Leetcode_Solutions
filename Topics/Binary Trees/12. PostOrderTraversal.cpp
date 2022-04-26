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
