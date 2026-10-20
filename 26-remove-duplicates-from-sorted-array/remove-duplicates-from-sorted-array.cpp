class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        int i=0;
        int count=0;
        while(i<n-1)
        {
            int j=i+1;
            if(nums[i]!=nums[j])
            {
                nums[k]=nums[j];
                i++;
                k++;
            }
            else
            {
                i++;
            }
        }
        return k;
    }
};