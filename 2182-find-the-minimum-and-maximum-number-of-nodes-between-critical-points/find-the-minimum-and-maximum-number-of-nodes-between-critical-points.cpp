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
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        if(head==NULL || head->next==NULL || head->next->next==NULL) return {-1,-1};
         vector<int>res;
         ListNode* prev=head;
         ListNode* curr=head->next;
         int i=2;
         while(curr->next!=NULL){
            if(curr->val>prev->val && curr->val>curr->next->val){
                res.push_back(i);
            }
            else if(curr->val<prev->val && curr->val<curr->next->val){
                res.push_back(i);
            }
            i++;
            prev=prev->next;
            curr=curr->next;
         }
        int mind=INT_MAX;
        int maxd=0;
        
         
         if(res.size()==0) return{-1,-1};
         else if(res.size()==1) return {-1,-1};
         for(int i=0;i<res.size()-1;i++){
            mind=min(mind,res[i+1]-res[i]);
         }
         return {mind,res[res.size()-1]-res[0]};
         
    }

};