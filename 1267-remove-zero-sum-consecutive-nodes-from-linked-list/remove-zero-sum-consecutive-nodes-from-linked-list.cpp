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
    ListNode* insert(ListNode* head,int num){
        ListNode* nn=new ListNode(num);
	ListNode *temp=head;
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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* h1=head;
        if(head==NULL) return NULL;
        if(head->next==NULL && head->val==0) return NULL;
        if(head->next==NULL && head->val!=0) return head;
        vector<int>arr;
        while(h1!=NULL){
            arr.push_back(h1->val);
            h1=h1->next;
        }
        int flag=1;
        while(flag){
            flag=0;
            int prefix=0;
            int kiran,keerthi;
            map<int,int>mp;
            for(int i=0;i<arr.size();i++){
                prefix+=arr[i];
                if(arr[i]==0){
                    kiran=i;
                    keerthi=i;
                    flag=1;
                    break;
                }
                else if(prefix==0){
                    kiran=0;
                    keerthi=i;
                    flag=1;
                    break;
                }
                else{
                    if(mp.find(prefix)!=mp.end()){
                        kiran=mp[prefix]+1;
                        keerthi=i;
                        flag=1;
                        break;
                    }
                    else{
                        mp[prefix]=i;
                    }
                }
            }
            if(flag){
                arr.erase(arr.begin()+kiran,arr.begin()+keerthi+1);
            }
        }
        ListNode* dummy=NULL;
        for(int i=0;i<arr.size();i++){
            dummy=insert(dummy,arr[i]);
        }
        return dummy;
    }
};