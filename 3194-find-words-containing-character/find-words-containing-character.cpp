class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
//         int n=words.size();
//         vector<int>aux;
//         int i=0;
//         while(i<n)
//         {
//              for(int j=0;j<words[i].size();j++)
//              {
//                 if(words[i][j]==x)
//                 {
//                     aux.push_back(i);
//                     break;
//                 }
//              }
//              i++;
//         }
//         return aux;
//     }
// };








int n=words.size();
vector<int>aux;
for(int i=0;i<n;i++)
{
    int n1=words[i].size();
    for(int j=0;j<n1;j++)
    {
        if(words[i][j]==x)
        {
            aux.push_back(i);
            break;
        }
    }
}
return aux;
    }
};















