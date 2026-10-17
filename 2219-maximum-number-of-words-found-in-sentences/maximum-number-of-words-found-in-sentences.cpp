class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int max=0;
        for(int i=0;i<n;i++)
        {
            int n1=sentences[i].size();
            int count=0;
            for(int k=0;k<n1;k++)
            {
            if(sentences[i][k]==' ')
            {
                count++;
            }
            }
            int words=count+1;
            if(words>max)
            {
                max=words;
            }
            

        }
        return max;
    }
};