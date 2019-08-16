/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public int rangeSumBST(TreeNode root, int L, int R) {
        int s = 0;
        Stack<TreeNode> stack = new Stack();
        stack.push(root);
        while(stack.isEmpty() == false){
            TreeNode node = stack.pop();
            if (L <= node.val && node.val <= R){
                s += node.val;
            }
            if (L < node.val && node.left != null){
                stack.push(node.left);
            }
            if (R > node.val && node.right != null){
                stack.push(node.right);
            }
        }
        
        return s;
        
    }
}