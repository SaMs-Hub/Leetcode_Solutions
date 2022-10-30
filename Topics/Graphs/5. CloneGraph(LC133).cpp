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
    
    
 // BFS O(m + n)
 
    unordered_map<Node*, Node*> m;
 Node* cloneGraph(Node* node) {
    if (!node) return NULL;

    Node* copyNode = new Node(node->val);
    m[node] = copyNode;

    queue<Node*> q;
    q.push(node);

     while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            
            for (int i = 0; i < curr->neighbors.size(); i++) {
                Node* neighbor = curr->neighbors[i];
                
                if (m.find(neighbor) == m.end()) {
                    m[neighbor] = new Node(neighbor->val);
                    q.push(neighbor);
                }
                
                m[curr]->neighbors.push_back(m[neighbor]);
            }
        }

    return copyNode;


        
    }
