/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        ArrayList<ListNode> m = new ArrayList<>();
        ListNode temp = head;

        while(temp!= null){
            if(m.contains(temp)){
                return true;
            }
            m.add(temp);
            temp = temp.next;
            
        }
        return false;
    }
}