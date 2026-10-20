class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string out="";
        int i=0;
        int n1=strs[i].size();
        if(n==1)
        {
            return strs[i];
        }
    for(int c=0;c<n1;c++)
      {
        int r=0;
        int count=0;
        while(r<n-1)
        {
          if(strs[r][c]==strs[r+1][c])
            {
               r++;
            }
            else
            {
               count++;
               break;
            }
        }
      if(r==n-1)
      {
       out=out+strs[r][c];
      }
      if(count==1)
      {
        break;
      }
      }
        return out;
        
    }
};