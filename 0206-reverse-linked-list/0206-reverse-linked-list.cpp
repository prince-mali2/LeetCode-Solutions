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
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=NULL;
        ListNode* curr=head;
        ListNode* nextt = head;

        while(curr!=NULL){
            nextt = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nextt;
        }
        head = pre;
        return head;
    }
};