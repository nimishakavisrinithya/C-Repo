/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int find(struct TreeNode* root){
    if(root==NULL) return 0;
     int lefty =find(root->left);
     int righty =find(root->right);
    return 1+lefty+righty;
 }
int countNodes(struct TreeNode* root) {
    int c = find(root);
    return c;
}