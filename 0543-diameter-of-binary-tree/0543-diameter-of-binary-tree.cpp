/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int diameter=0;
int dia(TreeNode* root){
    if(root==NULL) return 0;
    int l = dia(root->left);
    int r = dia(root->right);
    // update diameter at each node
        diameter = max(diameter, l + r);

        // return height of this node
        return 1 + max(l, r);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int c = dia(root);
        return diameter;
    }
};