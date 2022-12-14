// App 1 O(m * (4 * 3**l-1))

class TrieNode{
	public:
	TrieNode* children[26];
	bool isWord;

	TrieNode(){
		for (int i = 0; i < 26; i++){
			children[i] = NULL;
		}

		isWord = false;
	}

};


class Solution{

	private:
	TrieNode* root = new TrieNode();

	void insert(string word){
		TrieNode* node = root;
		int current = 0;

		for (int i = 0; i < word.size(); i++){
			current = word[i] - 'a';

			if (node->children[current] == NULL) node->children[current] = new TrieNode();

			node = node->children[current];
		}
		node->isWord = true;
	}

	void search(vector<vector<char>> &board, int i, int j, int m, int n, TrieNode* node, string word, vector<string> &result){
		if (i < 0 or i >= m or j < 0 or j >= n or board[i][j] == '#') return;

		char c = board[i][j];

		node = node->children[c - 'a'];

		if (!node) return;

		word += board[i][j];
		if (node->isWord){
			result.push_back(word);
			node->isWord = false;
		}

		board[i][j] = '#';

		search(board, i - 1, j, m, n, node, word, result);
		search(board, i + 1, j, m, n, node, word, result);
		search(board, i, j - 1, m, n, node, word, result);
		search(board, i, j + 1, m, n, node, word, result);

		board[i][j] = c;
	}

	public:
	   vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
		for (int i = 0; i < words.size(); i++) insert(words[i]);

		int m = board.size();
		int n = board[0].size();

		TrieNode* node = root;
		vector<string> result;

		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				search(board, i, j, m, n, node, "", result);
			}
		}

		return result;
        
    }


};
