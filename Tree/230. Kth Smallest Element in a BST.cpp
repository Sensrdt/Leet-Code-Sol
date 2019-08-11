//https://leetcode.com/problems/kth-smallest-element-in-a-bst/
class Solution {
public:
    vector<int> a;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, a);
        return a[k-1];
    }
    
    void inorder(TreeNode* root, vector<int>& a){
        if (root == NULL) return ;
        
        inorder(root->left, a);
        a.push_back(root->val);
        inorder(root->right, a);
        
    }
};

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