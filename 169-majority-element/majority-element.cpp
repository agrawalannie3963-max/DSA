class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int value=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                value=nums[i];
                count=1;
            }
            else
            {
                if(value==nums[i])
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }
        return value;

    }
};