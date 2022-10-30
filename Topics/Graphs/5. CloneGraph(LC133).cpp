// App 1 DFS O(m + n)

unordered_map<Node*, Node*> res;
 Node* cloneGraph(Node* node) {
    if (!node) return NULL;

    if(res.find(node) == res.end()){
       res[node] = new Node(node->val);
        for (int i =0; i < node->neighbors.size(); i++){
            Node* currentNode = node->neighbors[i];
            res[node]->neighbors.push_back(cloneGraph(currentNode));
        }
    }

    return res[node];


        
    }
