// Greedy

const canJump = (arr) => {
  let reachable = 0;
  const n = arr.length;

  for (let i = 0; i < n; i++) {
    if (i > reachable) {
      return false;
    }
    reachable = Math.max(reachable, i + arr[i]);

    if (reachable >= n - 1) {
      break;
    }
  }

  return true;
};


https://leetcode.com/problems/jump-game/description/
