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
    map<int,vector<int>>mp;
    void fun(TreeNode* root,int level){
        if(root==NULL) return;
        mp[level].push_back(root->val); 
        fun(root->left,level+1);
        fun(root->right,level+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        fun(root,0);
        int k=mp.size()-1;
        int sum=0;
        for(int i=0;i<mp[k].size();i++){
            sum+=mp[k][i];
        }
        return sum;
    }
};