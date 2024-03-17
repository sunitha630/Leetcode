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
    int flag=0;
    void fun(TreeNode* root,int t,int sum){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            if(t+root->val==sum){
                flag=1;
            }
            cout<<t<<" "<<sum<<endl;
            return;
        }
        fun(root->left,t+root->val,sum);
        fun(root->right,t+root->val,sum);   
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        fun(root,0,targetSum);
        if(flag==1){
            return true;
        }
        return false;
    }
};