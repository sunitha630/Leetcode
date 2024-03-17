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
    vector<vector<int>>res;
    void fun(TreeNode* root,int sum,int target,vector<int>v){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
        if(sum+root->val==target){
            v.push_back(root->val);
            res.push_back(v);
            return;
        }
        }
        v.push_back(root->val);
        fun(root->left,sum+root->val,target,v);
        fun(root->right,sum+root->val,target,v);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        fun(root,0,targetSum,{});
        return res;
    }
};