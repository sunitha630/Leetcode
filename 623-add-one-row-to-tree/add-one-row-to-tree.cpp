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
    void fun(TreeNode* root,int val,int depth,int height){
        if(root==NULL) return;
        if(height==depth-1){
            TreeNode *nn=new TreeNode(val);
            TreeNode *nn2=new TreeNode(val);
            TreeNode *d1=root->left;
            TreeNode *d2=root->right;
            root->left=nn;
            root->right=nn2;
            nn->left=d1;
            nn2->right=d2;
        }
        fun(root->left,val,depth,height+1);
        fun(root->right,val,depth,height+1);
        }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode *nn=new TreeNode(val);
           nn->left=root;
           return nn;
        }
        fun(root,val,depth,1);
        return root;
    }
};