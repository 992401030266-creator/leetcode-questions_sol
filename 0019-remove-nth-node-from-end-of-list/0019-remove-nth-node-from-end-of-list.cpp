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
        int s=0;
        ListNode* dum=head;
        while(dum){
            s=s+1;
            dum=dum->next;

        }
        if(n==s){ListNode* newhead=head->next;
        delete head;
        return newhead;
        
        }
        int todelete=s-n;
        ListNode* temp=head;
        for(int i=1;i<todelete;i++){
            temp=temp->next;
        }
        ListNode* next=temp->next->next;
        delete temp->next;
        temp->next=next;
        return head;
    }
};