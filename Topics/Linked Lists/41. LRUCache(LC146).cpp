// O(1)

  class Node
{
public:
	int k;
	int value;
	Node *next;
	Node *prev;

	Node(int key, int value)
	{
		k = key;
		this->value = value;
		prev = NULL;
		next = NULL;
	}
};

class LRUCache
{
private:
	int cap;
	unordered_map<int, Node *> cache;
	Node *left;
	Node *right;

public:
	LRUCache(int capacity)
	{
		cap = capacity;

		left = new Node(0, 0);
		right = new Node(0, 0);

		left->next = right;
		right->prev = left;
	}

	void remove(Node *node)
	{
		Node *prev = node->prev;
		Node *next = node->next;

		prev->next = next;
		next->prev = prev;
	}

	void insert(Node *node)
	{
		Node *prev = right->prev;
		Node *next = right;

		prev->next = node;
		next->prev = node;

		node->prev = prev;
		node->next = next;
	}

	int get(int key)
	{
		if (cache.find(key) != cache.end())
		{
			remove(cache[key]);
			insert(cache[key]);
			return cache[key]->value;
		}
		return -1;
	}

	void put(int key, int value){
		if (cache.find(key) != cache.end()) remove(cache[key]);

		cache[key] = new Node(key, value);
		insert(cache[key]);

		if (cache.size() > cap){
			Node* lru = left->next;
			remove(lru);
			cache.erase(lru->k);
		}
	}
};
