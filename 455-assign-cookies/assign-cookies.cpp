class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
//         int len=g.size();
//         int len1=s.size();
//         int i=0;
//         int j=0;
//         int count=0;
//         sort(g.begin(),g.end());
//         sort(s.begin(),s.end());
//             while((i<len)&&(j<len1))
//             {
//                 if(s[j]>=g[i])
//                 {
//                     count++;
//                     i++;
//                 }
//                 j++;
//             }
//                return count;

//     }
// };







int len1=g.size();
int len2=s.size();
int i=0;
int j=0;
int count=0;
sort(g.begin(),g.end());
sort(s.begin(),s.end());
while(i<len1 && j<len2)
{
    if(s[j]>=g[i])
    {
        count++;
        i++;
        j++;
    }
    else
    {
        j++;
    }
}
return count;
}
};





















