/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    TreeNode* construct(vector<TreeNode*>&list,int l,int h){
        if(l>h) return NULL;
        int mid=(l+h)/2;
        TreeNode* root = list[mid];
        root->left=construct(list,l,mid-1);
        root->right=construct(list,mid+1,h);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<TreeNode*>list;
        TreeNode *root=NULL;
        while(head!=NULL){
            TreeNode* node=new TreeNode(head->val);
            list.push_back(node);
            head=head->next;
        }
        return construct(list,0,list.size()-1);




    }
};