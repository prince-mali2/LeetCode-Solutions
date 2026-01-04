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
    // ListNode* reverse(ListNode* head){
    //     if(!head || !head->next) return head;

    //     ListNode* newHead = reverse(head->next);
    //     ListNode* front = head->next;
    //     front->next = head;
    //     head->next = NULL;
    //     return newHead;
    // }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode* h1 = reverse(l1);
        // ListNode* h2 = reverse(l2);

        ListNode* t1 = l1;
        ListNode* t2 = l2;
        int carry=0;
        int sum=0;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while(t1!=NULL || t2!=NULL){
            int sum = carry;

            if(t1) sum+=t1->val;
            if(t2) sum+=t2->val;

            temp->next = new ListNode(sum%10);
            carry = sum/10;
            temp = temp->next;
           
            if(t1)t1 = t1->next;
            if(t2)t2 = t2->next;
        }

        if(carry){
            temp->next = new ListNode(1);
            temp = temp->next;
            temp->next = NULL;
        }

       return dummy->next;

    }
};