// App 1 - BF - Single Pointer

Node *removeOccurence(Node* &head, int key)
{
    // base if headData is key point head to headNext
    while (head != NULL && head->data == key)
    {
        head = head->next;
    }
    // make temp CurrentNode while its next != NULL

    Node *currentNode = head;
    while (currentNode != NULL && currentNode->next != NULL)
    {
        // if it data is key, point it to nextNext
        if (currentNode->next->data == key)
        {
            currentNode->next = currentNode->next->next;
        }
        else
        {
            // else point to currNext
            currentNode = currentNode->next;
        }
    }

    return head;
}


// App 2 - Recursive
Node* removeOccurences(Node* head, int key){
    if (!head) return head;

    head->next = removeOccurences(head->next, key);

    return (head->data == key) ? head->next : head;
}


