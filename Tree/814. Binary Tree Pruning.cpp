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
    TreeNode *pruneTree(TreeNode *root)
    {
        if (root == NULL)
            return NULL;

        //l_dfs
        //r_dfs
        send(root);
        return root;
    }

    int send(TreeNode *root)
    {

        if (root == NULL)
            return 0;

        int l_dfs = send(root->left);
        int r_dfs = send(root->right);

        if (l_dfs < 1)
            root->left = NULL;
        if (r_dfs < 1)
            root->right = NULL;

        return root->val + l_dfs + r_dfs;
    }
};