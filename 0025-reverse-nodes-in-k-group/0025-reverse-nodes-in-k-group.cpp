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
    ListNode* reverse(ListNode* head){
        if(!head || !head->next) return head;

        ListNode* newHead = reverse(head->next);
        ListNode* front = head->next;
        front->next =head;
        head->next=NULL;

        return newHead;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* kNode = temp;
        ListNode* prevTail = NULL;
        int count =1;

        while(kNode!=NULL){
            if(count!=k){
                kNode = kNode->next;
                count++;
            }else{
            ListNode* nextNode = kNode->next;
            kNode->next = NULL;
            ListNode* newHead = reverse(temp);

            if(temp == head) head = kNode;
            else prevTail->next = newHead;

            prevTail = temp;
            temp->next = nextNode;
            temp = nextNode;
            kNode = temp;
            count=1;
            }
        }
        return head;
    }
};