class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int count1=0;
        int c;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                count++;
            }
            if(nums[i]<0)
            {
                count1++;
            }
        }
        c=max(count,count1);
        return c;
    }
};