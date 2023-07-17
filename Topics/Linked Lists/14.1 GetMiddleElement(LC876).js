// Two pointers - O(n)
const middleNode = (head) => {
    if (!head) return ull;

    let [slow, fast] = [head, head];

    while (fast && fast.next){
        slow = slow.next;
        fast = fast.next.next;
    }

    return slow;
}
