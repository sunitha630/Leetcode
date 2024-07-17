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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        map<int,TreeNode*>mp;
        map<int,TreeNode*>::iterator it;
        map<int,int>mp2;
        for(int i=0;i<descriptions.size();i++){
             if(mp.find(descriptions[i][1])==mp.end()){
                   TreeNode* nn=new TreeNode(descriptions[i][1]);
                   mp[descriptions[i][1]]=nn; 
                   mp2[descriptions[i][1]]++;  
                
             }
        }
        for(int i=0;i<descriptions.size();i++){
            if(mp.find(descriptions[i][0])==mp.end()){
                TreeNode* nn=new TreeNode(descriptions[i][0]);
                mp[descriptions[i][0]]=nn;
                
            }
        }
        
        for(int i=0;i<descriptions.size();i++){
            if(descriptions[i][2]==1){
                mp[descriptions[i][0]]->left=mp[descriptions[i][1]];
            }
            else{
                 mp[descriptions[i][0]]->right=mp[descriptions[i][1]];
            }
        }
        TreeNode *root=nullptr;
       for(it=mp.begin();it!=mp.end();it++){
        if(mp2.find(it->first)==mp2.end()){
            root=(it->second);
            break;
        }
       }
       return root;

        
       
       
    }
};