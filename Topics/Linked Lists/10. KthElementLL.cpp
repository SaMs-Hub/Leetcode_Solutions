// App 1 - BF

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



// App 2 - Using Recursion
Node* getKthNode(Node* head, int key){
    if (!head) return NULL;

    if (key == 1) return head;

    Node* smallerHead = getKthNode(head->next, key - 1);
    return smallerHead;


}
