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
    void levels(int level,TreeNode* root,map<int,long long>&mp){
        if(root==NULL) return;
        mp[level]+=root->val;
        levels(level+1,root->left,mp);
        levels(level+1,root->right,mp);
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>res;
        map<int,long long >mp;
        map<int,long long >::iterator it;
        levels(0,root,mp);
        for(it=mp.begin();it!=mp.end();it++){
          res.push_back(it->second);  
        }
        sort(res.rbegin(),res.rend());
        if(k>res.size()){
            return -1;
        }
        return res[k-1];
    }
};