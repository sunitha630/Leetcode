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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return NULL;
        }
        int c=0;
        ListNode* temp=head;
        ListNode* temp1=head;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        if(c == 1){
          if(n==1){
              return NULL;
          }
          return head;
        }
        if(c==2){
            if(n==1){
                head->next=NULL;
                return head;
            }
            else if(n==2){
                head=head->next;
                return head;
            }
        }
        if(n==1){
            while(temp1->next->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=NULL;
            return head;
        }
        if(n==2){
            while(temp1->next->next->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp1->next->next;
            return head;
        }
        if(c==n){
            head=head->next;
            return head;
        }
        int i;
        for(i=0;i<(c-n-1);i++){
            temp1=temp1->next;
        }
        //cout<<temp1->val;
        temp1->next=temp1->next->next;
        
        return head;

        
    }
};