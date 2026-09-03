class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int n1=word2.size();
        string ans="";
        int i=0;
        int j=0;
        int k=0;
        while((i<n)&&(j<n1))
        {
            ans=ans+word1[i];
            ans=ans+word2[j];
            i++;
            j++;
        }
        while(i<n)
        {
            ans=ans+word1[i];
            i++;
        }
        while(j<n1)
        {
            ans=ans+word2[j];
            j++;
        }
       return ans;


    }
};