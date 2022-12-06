// O(n)

    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        
        Node* cur = head;
        
        //bulid the interweaving list
        while(cur){
            Node* node = new Node(cur->val);
            node->next = cur->next;
            cur->next  = node;
            cur = node->next;
        }
        
        //assign "random"
        cur = head;
        Node* newcur;
        
        while(cur){
            newcur = cur->next;
            newcur->random = cur->random ? cur->random->next : nullptr;
            cur = cur->next->next;
        }
        
        //split the interleaving list to two lists
        Node* newhead = head->next;
        newcur = newhead;
        cur = head;
        while(newcur){
            Node* next = cur->next ? cur->next->next : nullptr;
            Node* newnext = newcur->next ? newcur->next->next : nullptr;
            cur->next = cur->next ? cur->next->next : nullptr;
            newcur->next = newcur->next ? newcur->next->next : nullptr;
            newcur = newnext;
            cur = next;
        }
        
        return newhead;
    }
