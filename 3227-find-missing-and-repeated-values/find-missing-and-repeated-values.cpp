class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int n1=grid[0].size();
        vector<int>aux(n*n+1,0);
        for(int c=0;c<n1;c++)
        {
            for(int r=0;r<n;r++)
            {
                aux[grid[r][c]]++;
            }
        }
        int k=0;
        vector<int>ans;
        int repeating=-1;
        int missing=-1;
        for(int k=1;k<=n*n;k++)
        {
            if(aux[k]==2)
            {
                repeating=k;
            }
            else if(aux[k]==0)
            {
                missing=k;
            }
        }
        return {repeating,missing};
    }
};