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
    void reorderList(ListNode* head) {
        // int len=0;
        ListNode* temp=head;
        // while(temp){
        //     len++;
        //     temp=temp->next;
        // }
        // int count=len/2;
        // temp=head;
        // while(count!=0){
        //     temp=temp->next;
        //     count--;
        // }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rev=slow->next;
        // ListNode* rev=temp->next;
        // temp->next=NULL;
        slow->next=NULL;
        ListNode* prev=NULL;
        temp=rev;
        while(temp!=NULL){
            ListNode* curr= temp->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
        }
        ListNode* temp1=head;
        ListNode* temp2=prev;
        while(temp2) {
            ListNode* next1=temp1->next;
            ListNode* next2=temp2->next;
            temp1->next=temp2;
            temp2->next=next1;
            temp1=next1;
            temp2=next2;
        }
    }
};
