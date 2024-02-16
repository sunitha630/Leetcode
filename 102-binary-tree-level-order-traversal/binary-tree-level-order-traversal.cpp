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
    void fun(TreeNode* root,map<int,vector<int>> &mp,int level){
        if(root==NULL) return;
        mp[level].push_back(root->val);
        fun(root->left,mp,level+1);
        fun(root->right,mp,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        map<int,vector<int>>mp;
        fun(root,mp,0);
        map<int,vector<int>>::iterator it;
        vector<vector<int>>res;
        for(it=mp.begin();it!=mp.end();it++){
            res.push_back(it->second);
        }
        return res;
    }
};