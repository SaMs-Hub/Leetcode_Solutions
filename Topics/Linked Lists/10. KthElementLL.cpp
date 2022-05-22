

//Kth Node
Node* kthNode(Node* head, int k){
    // get the var to store currentIndex, make a temp Node
    int index = 0;
    Node* currentNode = head;

    while (currentNode != NULL){
        // break the loop if k is same as index
          index += 1;
        if (index == k){
            break;
        }
      
        currentNode = currentNode->next;
    }

    return currentNode;
}

