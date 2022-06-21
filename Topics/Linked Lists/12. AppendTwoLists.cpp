Node *appendLists(Node *head1, Node *head2)
{
    // take heaad1 as currentNode
    Node *currentNode = head1;
    // travese till head1s end
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
    }

    // point heas1Next to head2
    currentNode->next = head2;
    // return head1
    return head1;
}



// Enhanced
Node* append(Node* h1, Node* h2){
    if (h1 == NULL){
        return h2;
    }
    if (h2 == NULL){
        return h1;
    }

    int count = 0;
    while (h1->next != NULL){
        h1 = h1->next;
    }

    h1->next = h2;
    return h1;
}
