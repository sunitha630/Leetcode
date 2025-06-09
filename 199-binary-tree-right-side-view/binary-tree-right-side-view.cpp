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
    void traverse(TreeNode* root,map<int,vector<int>>&mp,int height){
        if(root==NULL) return;
        mp[height].push_back(root->val);
        traverse(root->left,mp,height+1);
        traverse(root->right,mp,height+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        map<int,vector<int>>mp;
        traverse(root,mp,0);
        for(auto it:mp){
            res.push_back(it.second[it.second.size()-1]);
        }
        return res;

    }
};