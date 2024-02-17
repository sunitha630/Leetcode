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
    int r=0;
    void fun(TreeNode *root){
        if(root==NULL) return;
        r+=1;
        fun(root->left);
        fun(root->right);
    }
    int countNodes(TreeNode* root) {
        fun(root);
        return r;
    }
};