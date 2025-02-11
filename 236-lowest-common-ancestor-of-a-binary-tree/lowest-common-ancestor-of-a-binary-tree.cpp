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
    bool traverse(TreeNode* root,int p,int q,TreeNode* &nn){
        if(root == NULL) return false;
        bool left=traverse(root->left,p,q,nn);
        bool right=traverse(root->right,p,q,nn);
        bool current = (root->val == p || root->val == q) ;
        if(current && left || right && current || left && right){
            nn=root;
        }
        if(left || right || current){
            return true;
        }
        return false;
        
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *nn = new TreeNode();
        traverse(root,p->val,q->val,nn);
        return nn;
    }
};