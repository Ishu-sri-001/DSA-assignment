class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String,Boolean> map= new HashMap<>();
        int c=0;
        for (String val: arr)
        {
            if (map.containsKey(val))  
            map.put(val,false); 
            else
            map.put(val,true);
        }
        for (String val: arr)
        {
            if (map.get(val)) 
            c++;
            if (c==k)
            return val;
        }
        return "";
    }
}
