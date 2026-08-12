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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* res=new ListNode();
        ListNode* counter=res;
        while(temp1!=NULL && temp2!=NULL){
            ListNode* temp=new ListNode();
            if(temp1->val<temp2->val){
                temp->val=temp1->val;
                temp1=temp1->next;
            }else{
                temp->val=temp2->val;
                temp2=temp2->next;
            }
            counter->next=temp;
            counter=counter->next;
        }
        while(temp1!=NULL){
            counter->next=temp1;
            counter=counter->next;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            counter->next=temp2;
            counter=counter->next;
            temp2=temp2->next;
        }
        return res->next;
    }
};
