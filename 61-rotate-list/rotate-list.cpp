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
    int size(ListNode *head){
        int n=0;
        while(head!=NULL){
            n++;
            head=head->next;
        }
        return n;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *t=head;
        ListNode *temp1=head;
        ListNode *temp2=NULL;
        if(head==NULL) return NULL;
        if(k==0) return head;
        int n=size(head);
        if(k==n) return head;
        if(k%n==0 && k>n) return head;
        if(n==1) return head;
         k=k%n;
         int g=n-k-1;
        while(g){
           temp1=temp1->next;
           g--; 
        }
        temp2=temp1->next;
        temp1->next=NULL;
        ListNode * temp22=temp2;
        while(temp22->next!=NULL){
            temp22 =temp22->next;
        }
        temp22->next=head;
        return temp2;
    }
};