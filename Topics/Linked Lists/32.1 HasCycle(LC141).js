// Two pointers - O(n)
const hasCycle = (head) => {
  if (!head || !head.next) return false;
  else {
    let [slow, fast] = [head, head.next];
    while (slow != fast) {
      if (!fast || !fast.next) return false;
      else {
        slow = slow.next;
        fast = fast.next.next;
      }
    }

    return true;
  }
};


url: https://leetcode.com/problems/linked-list-cycle/description/
