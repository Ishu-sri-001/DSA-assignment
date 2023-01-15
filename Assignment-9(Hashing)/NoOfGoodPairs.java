import java.util.*;
class Solution {
    public int numIdenticalPairs(int[] a) {
        HashMap<Integer,Integer>mp = new HashMap<>();
        int c=0;
        for (int i=0;i<a.length;i++)
       {
        if (mp.containsKey(a[i])) 
        {
            c+=mp.get(a[i]);
           mp.put(a[i],mp.get(a[i])+1);
        }
        else 
           mp.put(a[i],1);
       }
       return c;
    }
}
