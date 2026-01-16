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
        vector<int>v;
        ListNode* curr1=list1;
        ListNode* curr2=list2;

        while(curr1!=NULL){
            v.push_back(curr1->val);
            curr1=curr1->next;
        }      
        while(curr2!=NULL){
            v.push_back(curr2->val);
            curr2=curr2->next;
        } 
        if (v.size() == 0) return NULL;
    sort(v.begin(),v.end());
          ListNode* head = new ListNode(v[0]);
    ListNode* tail = head;

    // attach remaining nodes
    for (int i = 1; i < v.size(); i++) {
        tail->next = new ListNode(v[i]);
        tail = tail->next;
    }return head;
    }
};