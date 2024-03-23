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
     ListNode* reverse(ListNode* head){
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* h1=head;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* rev2=reverse(slow->next);
        slow->next=NULL;
        while(rev2!=NULL){
            ListNode* nn=rev2;
            rev2=rev2->next;
            nn->next=h1->next;
            h1->next=nn;
            h1=h1->next->next;
            
        }
    }
};