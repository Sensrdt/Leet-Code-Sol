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
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        //Kind of dfs traversal

        if (root == NULL)
        {
            return NULL;
        }

        dfs(root, val);
        return root;
    }

    void dfs(TreeNode *&root, int val)
    {
        if (root == NULL)
        {
            root = new TreeNode(val);
            return;
        }
        if (val < root->val)
        {
            dfs(root->left, val);
        }
        else if (val > root->val)
        {
            dfs(root->right, val);
        }
    }
};