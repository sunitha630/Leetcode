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
    int maximum(TreeNode* root,int &ma){
        if(root==NULL) return 0;
        int ls=maximum(root->left,ma);
        int rs=maximum(root->right,ma);
        ma=max(ma,ls+rs+root->val);
        ma=max(ma,ls+root->val);
        ma=max(ma,rs+root->val);
        ma=max(ma,root->val);
        return  max(max(ls,rs)+root->val,root->val);
    }
    int maxPathSum(TreeNode* root) {
        int ma=INT_MIN;
        maximum(root,ma);
        return ma;
    }
};