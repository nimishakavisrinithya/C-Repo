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
void inorder(TreeNode* root, vector<int>&vec){
    if(root==NULL) return;
    vec.push_back(root->val);
    inorder(root->left, vec);
    inorder(root->right, vec);
}

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>vec;
        inorder(root, vec);
        return vec;
    }
};