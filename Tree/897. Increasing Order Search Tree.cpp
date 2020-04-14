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
    vector<TreeNode *> v;
    TreeNode *increasingBST(TreeNode *root)
    {
        if (root == NULL)
            return NULL;

        inorder(root);

        for (int i = 1; i < v.size(); i++)
        {
            v[i - 1]->left = NULL;
            v[i - 1]->right = v[i];
        }
        v.back()->left = v.back()->right = NULL;
        return v[0];
    }

    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        v.push_back(root);
        inorder(root->right);
    }
};
//https://leetcode.com/problems/increasing-order-search-tree/