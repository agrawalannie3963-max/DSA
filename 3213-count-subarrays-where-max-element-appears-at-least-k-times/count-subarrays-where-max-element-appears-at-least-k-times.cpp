class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=i;
        int count=0;
        long long int msw=0;
        int max_val=*std::max_element(nums.begin(),nums.end());
        while(j<n)
        {
            if(nums[j]==max_val)
            {
                count++;
                if(count==k)
                {
                    msw=msw+n-j;
                    while(count==k)
                    {
                    if(nums[i]!=max_val)
                    {
                        msw=msw+n-j;
                        i++;
                    }
                    else
                    {
                        count--;
                        i++;
                    }
                    }
                }
            }
            j++;
        }
        return msw;
    }
};