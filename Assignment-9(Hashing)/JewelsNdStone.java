class Solution {
    public int numJewelsInStones(String j, String s) {
        HashSet<Character> set=  new HashSet<>();
        for (int i=0;i<j.length();i++)
        {
            char ch= j.charAt(i);
            set.add(ch);
        }
        int c=0;
        for (int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if (set.contains(ch))
            {
                c++;
            }
        }
        return c;
    }
}
