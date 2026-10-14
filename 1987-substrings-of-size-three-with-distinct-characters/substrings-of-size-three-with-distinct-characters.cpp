class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int count=0;
        int i=0;
        while(i<=n-3)
        {
            if((s[i]!=s[i+1])&&(s[i+1]!=s[i+2])&&(s[i+2]!=s[i]))
            {
                count++;
                i++;
            }
            else
            {
                i++;
            }
        }
        return count;
    }
};