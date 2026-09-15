class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int len=nums.size();
        int maxval=nums[0];
        int minval=nums[0];
        int idx=0;
        int idx1=0;
        int i;
        int j;
        if(len==1)
        {
            return 1;
        }
        for( i=1;i<len;i++)
        {
            if(nums[i]>maxval)
            {
                maxval=nums[i];
                idx=i;
                
            }
        }
        for(j=1;j<len;j++)
        {
            if(nums[j]<minval)
            {
                minval=nums[j];
                idx1=j;
            }
        }
    
int r=max(idx,idx1);
int l=min(idx,idx1);
int m1=r-0+1;
int m2=len-l;
int m3=(l-0+1)+(len-r);
int min_val=min({m1,m2,m3});
return min_val;
    }
};

   