public class Solution {
    public int solve(String A) {
        HashSet set = new HashSet<>();
        int n=A.length();
        for (int i=0;i<n;i++)
        {
            char c= A.charAt(i);
            if (! set.contains(c))
            set.add(c);
            else 
            set.remove(c);
        }
        if (n%2==0 && set.isEmpty())
        return 1;
        else if (n%2!=0 && set.size()==1)
        return 1;
        return 0;
    }
}
