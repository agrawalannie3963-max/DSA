class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int idx=-1;
        for(int i=0;i<n;i++)
        {
            if(word[i]==ch)
            {
                idx=i;
                break;
            }
        }
        int temp='z';
        if(idx!=-1)
        {
        for(int j=0;j<=idx/2;j++)
        {
            temp=word[j];
            word[j]=word[idx-j];
            word[idx-j]=temp;
        }
        }
        return word;
    }
};