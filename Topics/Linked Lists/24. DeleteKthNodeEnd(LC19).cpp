/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *&head, int n)
    {

        int count = 0;
        ListNode *currentNode = head;
        while (currentNode != nullptr)
        {
            count += 1;
            currentNode = currentNode->next;
        }

        n = count - n;

        currentNode = head;
        int i = 1;
        while (i < n)
        {
            i++;
            currentNode = currentNode->next;
        }
        if (n == 0)
        {
            head = head->next;
            return head;
        }

        currentNode->next = currentNode->next->next;
        return head;
    }
};
