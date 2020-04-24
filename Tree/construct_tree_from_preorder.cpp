
    TreeNode *construct(TreeNode* &root, int a){
	            
	            if (!root)
			                return root = new TreeNode(a);
		            
		            if (a > root->val)
				                root->right = construct(root->right, a);
			            else
					                root->left = construct(root->left, a);
				            
				            return root;
					        }
    
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
	       
	            
	            TreeNode *root = NULL;
		            
		            
		            for (auto a : preorder)
				            {
						                construct(root, a);
								        }
			            
			            return root;
				        }
