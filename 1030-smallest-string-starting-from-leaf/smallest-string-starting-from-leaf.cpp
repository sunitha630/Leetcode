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
    void helper(TreeNode* root,vector<string>&vec,string s){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            char ch=97+root->val;
            string h=s+ch;
            reverse(h.begin(),h.end());
            vec.push_back(h);
            return;
        }
        if(root->left!=NULL){
            char ch=97+root->val;
            helper(root->left,vec,s+ch);
        }
        if(root->right!=NULL){
            char ch=97+root->val;
            helper(root->right,vec,s+ch);
        }
        
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>vec;
        helper(root,vec,"");
        sort(vec.begin(),vec.end());
        return vec[0];
    }
};