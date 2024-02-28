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
    void fun(map<int,vector<int>>&mp,int level,TreeNode* root){
        if(root==NULL) return;
        mp[level].push_back(root->val);
        fun(mp,level+1,root->left);
        fun(mp,level+1,root->right);
    }
    int findBottomLeftValue(TreeNode* root) {
        map<int,vector<int>>mp;
        fun(mp,0,root);
        map<int,vector<int>>::iterator it;
        int n=mp.size();
        return mp[n-1][0];
    }
};