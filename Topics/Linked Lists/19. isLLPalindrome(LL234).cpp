// App 1 - Naive


ListNode* getMid(ListNode* head){
    ListNode* curr = head;
    while (curr->next != NULL && curr->next->next != NULL){
        head = head->next;
        curr = curr->next->next;
    }
    return head;

}

ListNode* reverse(ListNode* head){
    ListNode* prev = NULL;
    ListNode* nextNode;

    while (head->next != NULL){
        nextNode = head->next;
        head->next = prev;

        prev = head;
        head = nextNode;
    }
    head->next = prev;
    return head;

}


bool isPalindrome(ListNode* head){
    ListNode* midNode = getMid(head);
    ListNode* secondHalf = reverse(midNode->next);

    while (secondHalf != NULL){
        if (secondHalf->data != head->data){
            return false;
        }
        secondHalf = secondHalf->next;
        head = head->next;

    }
    return true;
}

// App 2 - Stacks n Queues


    bool isPalindrome(ListNode* head) {
        stack<int> start;
    queue<int> end;

    ListNode* currentNode = head;
    while (currentNode){
        start.push(currentNode->val);
        end.push(currentNode->val);
        currentNode = currentNode->next;
    }

    while (!start.empty() and !end.empty()){
        if (start.top() != end.front()) return false;
        start.pop();
        end.pop();
    }
    return true;


}



// App 3- Naive Using Array
bool checkPal(vector<int> arr, int start, int end){
        if (start >= end){
            return true;
        }
        
        if (arr[start] == arr[end]){
            return checkPal(arr, start + 1, end - 1);
        }else{
            return false;
        }
    }
    
    bool isPalindrome(Node* head) {
        vector<int> arr;
        Node* currentNode = head;
        while (currentNode != NULL){
            arr.push_back(currentNode->data);
            currentNode = currentNode->next;
        }
        
        
        bool val = checkPal(arr, 0, arr.size() - 1);
        if (val){
            return true;
        }else{
            return false;
        }
    }



// App 4 - Vectors

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;

    ListNode* currentNode = head;
    while (currentNode){
        arr.push_back(currentNode->val);
        currentNode = currentNode->next;
    }

    for (int i = 0; i < arr.size()/2; i++){
        if (arr[i] != arr[(arr.size() - i - 1)]) return false;
    }
    return true;
        
    }
};
