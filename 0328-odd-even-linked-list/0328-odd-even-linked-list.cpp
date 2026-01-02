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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode* t1 = head;
        ListNode* t2 = head->next;
        ListNode* h1 = head;
        ListNode* h2 = head->next;
        ListNode* t3 = t2->next;

        int count = 3;

        while(t3!=NULL){
            if(count%2!=0){
                t1->next = t3;
                t1 = t1->next;
            }
            else{
                t2->next = t3;
                t2=t2->next;
            }
            t3=t3->next;
            count++;
        }
        t2->next=NULL;
        t1->next = h2;

        return h1;

    }
};