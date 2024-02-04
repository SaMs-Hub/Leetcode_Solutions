// Recursion
const lowestCommonAncestor = (root, p, q) => {
  if (!root || !p || !q) {
    return null;
  }

  if (p.value < root.value && q.value < root.value) {
    return lowestCommonAncestor(root.left, p, q);
  } else if (p.value > root.value && q.value > root.value) {
    return lowestCommonAncestor(root.right, p, q);
  }

  return root;
};
