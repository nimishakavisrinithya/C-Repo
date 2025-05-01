/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int rangeSumBST(struct TreeNode* root, int low, int high) {
    int sum=0;
        void inorder(struct TreeNode* root){
            if(root==NULL) return;
        inorder(root->left);
    if(root->val>=low && root->val<=high) sum+=root->val;
    inorder(root->right);
}
        inorder(root);
        return sum;
}