class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    
    //      string ans="";
    //     int len=strs.size();
    //     int len1=strs[0].size();
    //     for(int j=0;j<len1;j++)
    //     {
    //     for(int i=0;i<len-1;i++)
    //     {
    //         if(strs[i][j]!=strs[i+1][j])
    //         {
    //             return ans;
    //              break;
    //         }
    //     }

    //         ans.push_back(strs[0][j]);
    //     }
    //     return ans;
    // }
    // };






int n=strs.size();
int n1=strs[0].size();
string ans="";
for(int j=0;j<n1;j++)
{
for(int i=0;i<n-1;i++)
{
    if(strs[i][j]!=strs[i+1][j])
    {
        return ans;
         break;
    }
    
}
ans=ans+strs[0][j];
}
return ans;
}
};


















