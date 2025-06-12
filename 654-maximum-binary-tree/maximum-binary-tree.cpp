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
    vector<int> pref(vector<int>nums,int ele){
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele) break;
            else res.push_back(nums[i]);
        }
        return res;
    }
    vector<int> suf(vector<int>nums,int ele){
        vector<int>res;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==ele) break;
            else res.push_back(nums[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
    TreeNode* construct(vector<int>nums){
        if(nums.size()==0) return NULL;
        else if(nums.size()==1){
            TreeNode* root=new TreeNode(nums[0]);
            return root;
        }
        int val=*max_element(nums.begin(),nums.end());
        TreeNode* root=new TreeNode(val);
        root->left=construct(pref(nums,val));
        root->right=construct(suf(nums,val));
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums);
    }
};