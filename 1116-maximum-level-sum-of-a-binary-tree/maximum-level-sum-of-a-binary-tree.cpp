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
    map<int,long long>mp;
    void traverse(TreeNode* root,int level){
        if(root==NULL) return;
        mp[level]+=root->val;
        traverse(root->left,level+1);
        traverse(root->right,level+1);
    }
    int maxLevelSum(TreeNode* root) {
        traverse(root,1);
        long long ma = LLONG_MIN;
        int res=-1;
        for(auto it:mp){
            if(ma<it.second){
                ma=it.second;
                res=it.first;
            }
        }
        return res;
    }
};