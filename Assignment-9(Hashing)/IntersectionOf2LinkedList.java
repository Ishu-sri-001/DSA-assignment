/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
 import java.util.*;
public class Solution {
    public ListNode getIntersectionNode(ListNode hA, ListNode hB) {
       HashSet<ListNode>set= new HashSet<>();
         ListNode h1=hA;
         ListNode h2=hB;
        while (hA!=null)
        {
            set.add(hA);
            hA=hA.next;
        }
        while(hB!=null)
        {
            if (set.contains(hB) )  {
            return hB; }
            else
            hB=hB.next;
        }
        return null;
        
    }
}
