class Solution {
public:
    int findMin(vector<int>& nums) {
        // int n=nums.size();
        // int min=INT_MAX;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]<min)
        //     {
        //         min=nums[i];
        //     }
        // }
        // return min;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int top=0;
        int bottom=n-1;
        int max=nums[n-1];
        while(top<=bottom)
        {
            int mid=(top+bottom)/2;
            if(nums[mid]<max)
            {
                if(nums[mid]<max)
                {
                    max=nums[mid];
                }
                bottom=mid-1;
            }
            else
            {
                top=mid+1;
            }
        }
        return max;
    }
};