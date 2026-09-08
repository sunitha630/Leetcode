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
    ListNode* middleNode(ListNode* head) {
        int size=0;
        ListNode* dummy=head;
        while(dummy!=NULL){
            size++;
            dummy=dummy->next;
        }
        int mid=size/2; //size - 6 mid 3
        ListNode* dummy2=head;
        for(int i=0;i<mid;i++){
            dummy2=dummy2->next;
        }
        return dummy2;

    }
};