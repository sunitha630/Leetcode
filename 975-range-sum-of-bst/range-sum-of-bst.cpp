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
    int s=0;
    void sum(TreeNode* root,int l,int h){
        if(root==NULL) return;
        if(root->val<=h && root->val>=l){
            s+=root->val;
            sum(root->left,l,h);
            sum(root->right,l,h);
        }
        else if(root->val<l){
            sum(root->right,l,h);
        }
        else if(root->val>h){
            sum(root->left,l,h);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum(root,low,high);
        return s;
    }
};