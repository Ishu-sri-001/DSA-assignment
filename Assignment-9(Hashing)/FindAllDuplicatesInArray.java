class Solution {
    public List<Integer> findDuplicates(int[] n) {
         List<Integer> res = new ArrayList<>();
         HashSet<Integer> set= new HashSet<>();
         for (int i=0;i<n.length;i++)
         {
         if (set.contains(n[i]))
         {
             res.add(n[i]);
         }
         else
         {
             set.add(n[i]);
         }
         }
         return res;
    }
}
