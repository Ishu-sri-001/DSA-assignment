class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap <Integer, Integer>map =new HashMap<>();
        for (int i=0;i<nums.length;i++)
        {
            map.put(nums[i],i);
        }
        int ar[]=new int[2];
        for (int i=0;i<nums.length;i++)
        {
            int search= target-nums[i];
            if (map.containsKey(search) && map.get(search)!=i)
            {
                ar[0]=i;
                ar[1]=map.get(search);
                return ar;
            }
        }
        ar[0]=-1;
        ar[1]=-1;
        return ar;
    }
}
