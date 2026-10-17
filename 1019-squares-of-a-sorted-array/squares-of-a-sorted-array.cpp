class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>aux;
        for(int i=0;i<n;i++)
        {
            aux.push_back(nums[i]*nums[i]);
        }
        sort(aux.begin(),aux.end());
        return aux;
    }
};