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
    ListNode* sortList(ListNode* head) {
        if(!head)return head;
        ListNode* temp = head;
        vector<int> v;

        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(), v.end());

        ListNode* h2 = new ListNode(0);
        ListNode* t1 = h2;

        for(auto i : v){
            ListNode* newNode = new ListNode(i);
            
            t1->next = newNode;
            t1= newNode;
        }
    return h2->next;
    }
};