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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k<=0) return head;
        int size=1;
        ListNode* temp = head;
        ListNode* last = head;
        while(temp->next!=NULL){
            temp = temp->next;
            last = last->next;
            size++;
        }


        int count=1;
        k = k%size;
        if(k<=0)return head;

        ListNode* temp1= head;

        while(count != size-k){
            temp1 = temp1->next;
            count++;
        }
        ListNode* newHead = temp1->next;
        temp1->next = NULL;
        last->next = head;
        head = newHead;


    return head;
    }
};