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
    vector<int> leftt(vector<int>inorder,int ele){
        vector<int>left;
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]==ele){
                break;
            }
            else{
                left.push_back(inorder[i]);
            }
        }
        return left;
    }
    vector<int> rightt(vector<int>inorder,int ele){
        vector<int>right;
        for(int i=inorder.size()-1;i>=0;i--){
            if(inorder[i]==ele){
                break;
            }
            else{
                right.push_back(inorder[i]);
            }
        }
        reverse(right.begin(),right.end());
        return right;
    }
     int fun(vector<int>postorder,vector<int>inorder){
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        for(int i=postorder.size()-1;i>=0;i--){
            if(mp.find(postorder[i])!=mp.end()){
                return postorder[i];
            }
        }
        return -1;
    }
    TreeNode* traverse(vector<int>postorder,vector<int>inorder){
        if(inorder.size()==0) return NULL;
        if(inorder.size()==1){
            TreeNode* root=new TreeNode(inorder[0]);
            return root;
        }
        int val=fun(postorder,inorder);
        TreeNode* root=new TreeNode(val);
        root->left=traverse(postorder,leftt(inorder,root->val));
        root->right=traverse(postorder,rightt(inorder,root->val));
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return traverse(postorder,inorder);
    }
};