class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=nums.size();
        int a[2];
        a[0]=-1;
        a[1]=-1;
        int f=-1;
        int lst=-1;
        for (int i=0;i<l;i++)
        {
            if (nums[i]==target)
            f=i;
            break;
        }
        for(int j=l;j>=0;j--)
        {
            if (nums[j]==target)
            lst=j;
            break;
        }
        a[0]=f;
        a[1]=lst;
        return a[];
    }
};
