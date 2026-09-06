class Solution {
public:
    bool isSubsequence(string s, string t) {
//         int count=0;
//         int j=0;
//         int i=0;
//         int len=s.size();
//         int len2=t.size();
//         while((i<len)&&(j<len2))
//         {
//             if(s[i]==t[j])
//             {
//                 i++;
//             }
//             j++;
//         }
//         if(i==len)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };





int n=t.size();
int n1=s.size();
int j=0;
int count=0;
if(s.size()==0)
{
    return true;
}
for(int i=0;i<n;i++)
{
    if(s[j]==t[i])
    {
        count++;
        j++;
        if(count==n1)
        {
            return true;
            break;
        }
    }
}
return false;
}
};













