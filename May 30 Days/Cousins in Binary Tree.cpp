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
        
    bool isCousins(TreeNode* root, int x, int y) {

        int d1 = -1, d2 = -1, p1 = 0, p2 = 0;
 
        calculate(root, x, y, 0, d1, d2, p1, p2);
        
        if ((d1 == d2) && (p1 != p2)){
            return true;
        }else{
            return false;
        }
    }
    
    void calculate(TreeNode* root, int x, int y, int d, int& d1, int& d2, int& p1, int& p2){
        if (root == NULL){
            return ;
        }
                
        if (root->left){
            if (root->left->val == x){
                p1 = root->val;
                d1 = d + 1;
            }else if (root->left->val == y){
                p2 = root->val;
                d2 = d + 1;
            }
        }
        
        if (root->right){
            if (root->right->val == x){
                p1 = root->val;
                d1 = d + 1;
            }else if (root->right->val == y){
                p2 = root->val;
                d2 = d + 1;
            }
        }
        // cout << "p1 " << p1 << " p2 " << p2 << " d1 " << d1 << " d2 " << d2 << endl;
        if (d1 != -1 && d2 != -1){
            return;
        }
        
        calculate(root->left, x, y, d+1, d1, d2, p1, p2);
        calculate(root->right, x, y, d+1, d1, d2, p1, p2);
        
    } 
    
};