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
