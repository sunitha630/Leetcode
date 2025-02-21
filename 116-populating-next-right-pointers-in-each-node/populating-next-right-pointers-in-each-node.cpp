/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        map<int,vector<Node*>>mp;
        map<int,vector<Node*>>::iterator it;
        queue<pair<Node*,int>>qu;
        qu.push({root,0});
        while(!qu.empty()){
            Node* node = qu.front().first;
            int t = qu.front().second;
            mp[t].push_back(node);
            if(node->left!=NULL){
                qu.push({node->left,t+1});
            }
            if(node->right!=NULL){
                qu.push({node->right,t+1});
            }
            qu.pop();
        }
        for(it=mp.begin();it!=mp.end();it++){
            
            for(int i=0;i<it->second.size();i++){
                if(i==it->second.size()-1){
                    it->second[i]->next=NULL;
                }
                else{
                it->second[i]->next=it->second[i+1];
                }
            }
            
        }
        return root;
    }
};