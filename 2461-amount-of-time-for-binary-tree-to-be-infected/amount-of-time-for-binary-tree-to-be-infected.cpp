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
    void adjacencyList(TreeNode* root,map<int,vector<int>>&mp){
        if(root==NULL) return;
        if(root->left!=NULL){
            mp[root->val].push_back(root->left->val);
            mp[root->left->val].push_back(root->val);
            adjacencyList(root->left,mp);
        }
        if(root->right!=NULL){
            mp[root->val].push_back(root->right->val);
            mp[root->right->val].push_back(root->val);
            adjacencyList(root->right,mp);
        }
       
    }
    int amountOfTime(TreeNode* root, int start) {
        map<int,vector<int>>mp;
        adjacencyList(root,mp);
        queue<pair<int,int>>qu;
        map<int,int>m;
        qu.push({start,0});
        m[start]++;
        int res=0;
        while(!qu.empty()){
            int num=qu.front().first;
            int time=qu.front().second;
           for(int i=0;i<mp[num].size();i++){
            if(m.find(mp[num][i])==m.end()){
                qu.push({mp[num][i],time+1});
                m[mp[num][i]]++;
                res=max(res,time+1);
            }
           }
           qu.pop();
         }
        return res;
    }
};