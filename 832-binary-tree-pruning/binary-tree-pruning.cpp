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
    int prune(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int ll= prune(root->left);
        if(ll==0){
            root->left=NULL;
        }
        int rr= prune(root->right);
        if(rr==0){
            root->right=NULL;
        }
        return root->val+ll+rr;
    }
    TreeNode* pruneTree(TreeNode* root) {
        int k=prune(root);
        if(k==0) return NULL;
        return root;
    }
};