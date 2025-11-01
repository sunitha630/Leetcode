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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       map<int,int>mp;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
       } 
       ListNode* head1=head;
       ListNode* head2=head->next;
       while(head2!=NULL){
        if(mp.find(head2->val)!=mp.end()){
            head1->next=head2->next;
            head2=head2->next;
        }
        else{
            head1=head2;
            head2=head2->next;
        
        }
       }
       if(mp.find(head->val)!=mp.end()){
        head=head->next;
       }
       return head;
    }
};