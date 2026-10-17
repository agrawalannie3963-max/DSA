class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        // int min=INT_MAX;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]<min)
        //     {
        //         min=nums[i];
        //     }
        // }
        // arr.push_back(min);
        for(int i=0;i<n;i++)
        {
        arr.push_back(nums[i]);
        }
        sort(arr.begin(),arr.end());
        int j=0;
        while(j<n-1)
        {
            swap(arr[j],arr[j+1]);
            j=j+2;
        }
        return arr;

    }
};