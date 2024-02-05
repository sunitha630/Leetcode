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
   int gcd(int a,int b,int res){
     while(res>0){
         if(a%res==0 && b%res==0) break;
         res--;
     }
     return res;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp->next!=NULL){
            ListNode* nn=new ListNode(gcd(temp->val,temp->next->val,min(temp->val,temp->next->val)));
            nn->next=temp->next;
            temp->next=nn;
            temp=temp->next->next;
        }
        return head;
    }
};