class Solution {
public:
    string triangleType(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=n-3;i++)
        {
            if(((nums[i]+nums[i+1])>nums[i+2])&&((nums[i+1]+nums[i+2])>nums[i])&&((nums[i+2]+nums[i])>nums[i+1]))
            {
            if((nums[i]==nums[i+1])&&(nums[i+1]==nums[i+2])&&(nums[i+2]==nums[i]))
            {
                return "equilateral";
            }
            else if((nums[i]!=nums[i+1])&&(nums[i+1]!=nums[i+2])&&(nums[i+2]!=nums[i]))
            {
                return "scalene";
            }
            else
            {
                return "isosceles";
            }
            }
        }
        return "none";
    }
};