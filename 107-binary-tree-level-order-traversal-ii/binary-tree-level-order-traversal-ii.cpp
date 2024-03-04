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
    void fun(TreeNode *root,int level,map<int,vector<int>>&mp){
        if(root==NULL) return;
        mp[level].push_back(root->val);
        fun(root->left,level+1,mp);
        fun(root->right,level+1,mp);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        map<int,vector<int>>mp;
         map<int,vector<int>>::iterator it;
        fun(root,0,mp);
        vector<vector<int>>res;
        for(it = mp.begin();it!=mp.end();it++){
            res.push_back(it->second);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};