class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int n=grid.size();
       int n1=grid[0].size();
       int count=0;
       for(int r=0;r<n;r++)
       {
        for(int c=0;c<n1;c++)
        {
            if(grid[r][c]<0)
            {
                count++;
            }
        }
       } 
       return count;
    }
};