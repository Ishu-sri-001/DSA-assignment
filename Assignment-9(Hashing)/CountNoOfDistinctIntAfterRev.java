class Solution {
    public int countDistinctIntegers(int[] n) {
        HashSet<Integer>set= new HashSet<>();
       int l=n.length;
       int j=l;
       for (int i=0;i<l;i++)
       { 
           set.add(n[i]);
           int num=n[i],rev=0;
           while(num!=0)
           {
               int dig=num%10;
               rev=rev*10 +dig;
               num=num/10;
           }
           set.add(rev);
       } 
       int size=set.size();
       return size;
    }
}
