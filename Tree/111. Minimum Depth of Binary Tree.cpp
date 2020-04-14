/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        if (!root->left && !root->right)
            return 1;
        if (!root->left && root->right)
        {
            return 1 + minDepth(root->right);
        }
        if (root->left && !root->right)
        {
            return 1 + minDepth(root->left);
        }

        int ld = minDepth(root->left);
        int rd = minDepth(root->right);

        return 1 + min(ld, rd);
    }
};