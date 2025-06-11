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
        if(root==NULL){
            mp[height].push_back(-1000);
            return;
        }
        mp[height].push_back(root->val);
        traverse(root->left,mp,height+1);
        traverse(root->right,mp,height+1);
    }
    bool pal(vector<int>vec){
        int n=vec.size();
        int l=0,h=n-1;
        while(l<=h){
            if(vec[l]!=vec[h]){
                return false;
            }
            l++;
            h--;

        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        map<int,vector<int>>mp;
        traverse(root,mp,0);
        for(auto it:mp){
            
            bool flag=pal(it.second);
            if(!flag) return flag;
        }
        return true;
    }
};