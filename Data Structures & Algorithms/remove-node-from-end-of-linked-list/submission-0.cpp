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
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        n=count-n;
        if(n==0) {
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode* temp1=head;
        ListNode* temp2=head;
        while(temp1!=NULL && n!=0) {
            temp2=temp1;
            temp1=temp1->next;
            n--;
        }
        temp2->next=temp1->next;
        delete temp1;
        return head;
    }
};