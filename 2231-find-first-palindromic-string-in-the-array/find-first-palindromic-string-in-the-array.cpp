class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            int n1=words[i].size();
            if(n1==1)
            {
                return words[i];
            }
            int j=0;
            int k=n1-1;
            while(j<=n1/2)
            { 
                if(words[i][j]==words[i][k])
                {
                    j++;
                    k--;
                   if(j==n1/2)
                   {
                    return words[i];
                   }
                }
                else
                {
                    break;
                }
            }

        }
        return "";
    }
};