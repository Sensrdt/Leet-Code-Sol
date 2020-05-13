/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    int dfs(TreeNode* root){
        
        if (root == NULL)
            return 0;
        
        int x = dfs(root->left);
        int y = dfs(root->right);
        
        ans = max(ans, x+y+root->val);
        
        return max(0, root->val + max(x, y));
    }
    
    int maxPathSum(TreeNode* root) {
        if (!root) return NULL;
        
        ans = INT_MIN;
        
        dfs(root);
        
        return ans;
        
        
    }
};
