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
    ListNode* insert(ListNode *head,int val){
        ListNode* temp=head;
        ListNode* nn=new ListNode(val);
        if(head==NULL){
            head=nn;
        }
        else{
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=nn;
        }
        return head;    
    }
    ListNode* oddEvenList(ListNode* head) {
       // int c=0;
       if(head==NULL) return NULL;
        ListNode* h1=NULL;
        ListNode* h2=NULL;
        ListNode* h=head;
        int c=1;
        while(h!=NULL){
            if(c%2!=0){
                h1=insert(h1,h->val);
            }
            else{
                h2=insert(h2,h->val);
            }
            c++;
            h=h->next;
        }
        ListNode* hh=h1;
        while(hh->next!=NULL){
            hh=hh->next;
        }
        hh->next=h2;
        return h1;
    }
};