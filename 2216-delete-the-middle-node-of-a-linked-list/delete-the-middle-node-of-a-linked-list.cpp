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
    ListNode* deleteMiddle(ListNode* head) {
       int c=0;
        ListNode *h1=head;
        ListNode *mid=head;
        while(h1!=NULL){
            c++;
            h1=h1->next;
        }
        if(c==1) return NULL;
        c=(c/2)-1;
        while(c--){
            mid=mid->next;
        }
        mid->next=mid->next->next;
        return head;
        
    }
};