class Solution {
    public int findFinalValue(int[] n, int or) {
      HashSet<Integer> set= new HashSet<>();
      for (int i=0;i<n.length;i++)
      {
          set.add(n[i]);
      } 
        while (set.contains(or))
        {
            or=or*2;
      }    
      return or;   
    }
}
