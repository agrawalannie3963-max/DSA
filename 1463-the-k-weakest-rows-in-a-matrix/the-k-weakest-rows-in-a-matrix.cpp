class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int n=mat.size();
    int n1=mat[0].size();
    int count=0;
    vector<vector<int>>aux;
    int c;
    int r;
    for( r=0;r<n;r++)
    {
        count=0;
        for(c=0;c<n1;c++)
        {
           if(mat[r][c]==1)
           {
              count++;
           }
        }
        aux.push_back({count,r});
    }
    int n2=aux.size();
    sort(aux.begin(),aux.end());
    vector<int>ans;
    int j;
    for(j=0;j<k;j++)
    {
       ans.push_back(aux[j][1]);
    }
        
return ans;
        
    }
};
