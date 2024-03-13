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
    ListNode* mergeNodes(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* l1=head;
        ListNode* l2=head;
        int sum=0;
        while(l2->next!=NULL){
           if(l2->next->val!=0){
            l1->val+=l2->next->val;
           }
           else{
            l1->next=l2->next;
            l1=l1->next;
           }
           l2=l2->next;
        }
        ListNode* l3=head;
        while(l3->next->next!=NULL){
            l3=l3->next;
        }
        l3->next=NULL;
        return head;

    }
};