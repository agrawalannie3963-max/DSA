class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n=sentence.size();
        int n1=searchWord.size();
        int count=0;
        int i=0;
        int j=0;
        int k=0;
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if((sentence[i]!=' ')&&(i==0||sentence[i-1]==' '))
            {
                count++;
                k=0;
                while(sentence[i]==searchWord[k])
                {
                    // int idx=i;
                    // if(idx<min)
                    // {
                    //     min=idx;
                    // }
                    if(k==n1-1)
                    {
                        
                        return count;
                        break;
                    }
                    i++;
                    k++;
                }
            }
        }
                return -1;
    }

};
// int n=sentence.size();
// int i=0;
// int j=0;
// int k=0;
// while(i<n)
// {
//         if(sentence[i][0]==searchWord[k])
//         {
//             idx=i;
//             break;
//         }
//         else
//         {
//            i++;
//         }
//     }
// }