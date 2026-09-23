
// Make a queue and put the root into it.
// Process the queue one level at a time.
// Remember how many nodes are currently in the queue.
// Process exactly those nodes and collect their values.
// Add each node's left and right children to the queue.
// Add the collected values as one level in the result.
// Repeat until the queue is empty.
// Return the result.


const levelOrder = (root) => {
  const result = [];

  if (!root) {
    return result;
  }

  const queue = [root];

  while (queue.length) {
    const level = [];
    let levelSize = queue.length;

    for (let i = 0; i < levelSize; i++) {
      const current = queue.shift();
      level.push(current.val);

      if (current.left !== null) {
        queue.push(current.left);
      }

      if (current.right !== null) {
        queue.push(current.right);
      }
    }

    result.push(level);
  }

  return result;
};
