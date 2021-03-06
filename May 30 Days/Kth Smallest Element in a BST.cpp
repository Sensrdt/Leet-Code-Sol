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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> s;
        while(true){
            while(root != NULL){
                s.push(root);
                root = root->left;
            }

            root = s.top();
            s.pop();
            if (--k == 0) return root->val;
            root = root->right;
        }
    }
};