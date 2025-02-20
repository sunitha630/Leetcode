/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void createAdj(TreeNode* root,map<int,vector<int>>&adj){
        if(root==NULL) return;
        if(root->left!=NULL){
            adj[root->val].push_back(root->left->val);
            adj[root->left->val].push_back(root->val);
            createAdj(root->left,adj);
        }
        if(root->right!=NULL){
            adj[root->val].push_back(root->right->val);
            adj[root->right->val].push_back(root->val);
            createAdj(root->right,adj);
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<int,vector<int>>adj;
        createAdj(root,adj);
        vector<int>res;
        queue<pair<int,int>>qu;
        map<int,int>mp;
        qu.push({target->val,0});
        mp[target->val]++;
        int node=qu.front().first;
        int time=qu.front().second;
        while(time<=k && !qu.empty()){
            node=qu.front().first;
            time=qu.front().second;
            if(time==k){
                res.push_back(node);
            }
            for(int i=0;i<adj[node].size();i++){
                if(mp.find(adj[node][i])==mp.end()){
                    qu.push({adj[node][i],time+1});
                    mp[adj[node][i]]++;
                }
            }
            qu.pop();
        }
        return res;
    }
};