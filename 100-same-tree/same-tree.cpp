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
    void fun(TreeNode *p,TreeNode *q){
        if(p==NULL && q==NULL) return;
        if(p==NULL && q!=NULL){
            flag=1;
            return;
        }
        if(p!=NULL && q==NULL){
            flag=1;
            return;
        }
        if(p->val != q->val){
            flag=1;
            return;
        }
        fun(p->left,q->left);
        fun(p->right,q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
         fun(p,q);
         if(flag){
             return false;
         }
         return true;
    }
};