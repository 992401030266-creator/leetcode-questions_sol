class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* h1 = l1;
        ListNode* h2 = l2;

        ListNode* ans = new ListNode();
        ListNode* curr = ans;

        // Step 1: Add corresponding nodes
        while (l1 && l2) {

            int v = l1->val + l2->val;

            curr->next = new ListNode(v);
            curr = curr->next;

            l1 = l1->next;
            l2 = l2->next;
        }

       
        while (l1) {
            curr->next = new ListNode(l1->val);
            curr = curr->next;
            l1 = l1->next;
        }

    
        while (l2) {
            curr->next = new ListNode(l2->val);
            curr = curr->next;
            l2 = l2->next;
        }

     
        curr = ans->next;

        while (curr) {

            if (curr->val >= 10) {

                int carry = curr->val / 10;
                curr->val = curr->val % 10;

            
                if (curr->next == nullptr) {
                    curr->next = new ListNode(0);
                }

                curr->next->val += carry;
            }

            curr = curr->next;
        }

        return ans->next;
    }
};