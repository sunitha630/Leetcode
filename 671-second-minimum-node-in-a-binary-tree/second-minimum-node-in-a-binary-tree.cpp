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
    map<int,int>mp;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        mp[root->val]++;
        inorder(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        if(mp.size()<2){
            return -1;
        }
        map<int,int>::iterator it;
        it=mp.begin();
        it++;
        return it->first;
    }
};