/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isUnivalTree(struct TreeNode* root) {
    int c=1;
   int k = root->val;
 void inorder(struct TreeNode* root){
    if(root==NULL) return;
       inorder(root->left);
       if(root->val!=k) c=0;
       inorder(root->right);
    }
    inorder(root);
    if(c==1) return 1;
    return 0;
}