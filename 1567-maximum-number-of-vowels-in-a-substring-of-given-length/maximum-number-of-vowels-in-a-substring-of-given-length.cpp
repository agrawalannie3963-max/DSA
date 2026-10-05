class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
        int vowelcount=0;
        int len=0;
        int maxcount=0;
        while(j<n)
        {
            if((s[j]=='a')||(s[j]=='e')||(s[j]=='i')||(s[j]=='o')||(s[j]=='u'))
            {
                j++;
                vowelcount++;
                if(vowelcount>maxcount)
                {
                    maxcount=vowelcount;
                }
                len++;
            }
            else
            {
                j++;
                len++;
            }
            if(len==k)
            {
                if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
                {
                    vowelcount--;
                    i++;
                    len--;
                }
                else
                {
                    i++;
                    len--;
                }
            }
        }
        return maxcount;
    }
};