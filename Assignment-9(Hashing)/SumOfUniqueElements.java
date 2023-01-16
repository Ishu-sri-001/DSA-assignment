class Solution {
    public int sumOfUnique(int[] n) {
        HashMap<Integer,Integer> map= new HashMap<>();
        for (int i=0;i<n.length;i++)
        {
        if (map.containsKey(n[i]))
        map.put(n[i],map.get(n[i])+1);
        else
        map.put(n[i],1);
        }
        int s=0;
        for (int i=0;i<n.length;i++)
        {
            if (map.get(n[i])==1)
            s=s+n[i];
        }
        return s;
    }
}
