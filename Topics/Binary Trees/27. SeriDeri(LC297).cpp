// App 1 O(n)

void encode(TreeNode* root, ostringstream& out){
	if (!root){
		out << "N ";
		return;
	}

	out << root->val << " ";

	encode(root->left, out);
	encode(root->right, out);
}


  string serialize(TreeNode* root) {
	ostringstream out;
	encode(root, out);
	return out.str();
        
    }

	TreeNode* decode(istringstream& in){
		string val = " ";
		in >> val;

		if (val == "N") return NULL;

		TreeNode* root = new TreeNode(stoi(val));

		root->left = decode(in);
		root->right = decode(in);

		return root;

	}

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
		istringstream in(data);
		return decode(in);
        
    }
