int sol(TreeNode<int> *root, int &maxi) {
  if (root == NULL)
    return 0;
  int left = solve(root->left, maxi);
  int right = solve(root->right, maxi);
  maxi = max(maxi, left + right);
  return max(left, right) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
  int maxi = 0;
  sol(root, maxi);
  return maxi;
}
