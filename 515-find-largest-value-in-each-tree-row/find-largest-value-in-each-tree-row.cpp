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
    void func(TreeNode*root,map<int,vector<int>>&mp,int count){
        if(root==NULL){
            return;
        }
        mp[count].push_back(root->val);
        func(root->left,mp,count+1);
        func(root->right,mp,count+1);

    }
    vector<int> largestValues(TreeNode* root) {
        map<int,vector<int>>mp;
        func(root,mp,0);
        vector<int>v;
        map<int,vector<int>>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            v.push_back(*max_element(it->second.begin(),it->second.end()));
        }
        return v;
    }
};