class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//         int n=s.size();
//         long long int count=0;
//         int i=0;
//         if(n==3)
//         {
//             if((s[i]!=s[i+1])||(s[i+1]!=s[i+2])||(s[i+2]!=s[i]))
//             {
//                 count++;            
//             }
//             return count;
//         }
//         while(i<=n-2)
//         {
//             if((s[i]!=s[i+1])&&(s[i+1]!=s[i+2])&&(s[i+2]!=s[i]))
//             {
//                 count++;
//                 i=i+2;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         return count+1;
//     }
// };
// int n=s.size();
// int i=0;
// int j=i+1;
// int count=0;
// for(int i=0;i<n;i++)
// {
//     for(int j=i+1;j<n;j++)
//     {
//     if(s[i]!=s[j])
//     {
//         count++;
//     }
//     }
// }
// return count;
//     }
// };
// bruteforce
// int n=s.size();
// int i=0;
// int count=0;
// int max_len=0;
// for(int i=0;i<n;i++)
// {
//     vector<int>aux(128,0);
//     count =0;
//     int flag=1;
//     for(int j=i;j<n && flag==1;j++)
//     {
//         if(aux[s[j]]==1)
//         {
//            flag=0;
//         }
//         else
//         {
//             aux[s[j]]=1;
//             count++;
//             max_len=max(max_len,count);
//         }
//     }
// }
//     return max_len;
// }
//     };
long long int i=0;
long long int j=i;
int count=0;
int max=0;
int n=s.size();
vector<int>aux(128,0);
while(j<n)
{
    aux[s[j]]++;
    while(aux[s[j]]>1)
        {
            aux[s[i]]--;
            i++;
        }
    int len=j-i+1;
    if(len>max)
    {
        max=len;
    }
    j++;
}
return max;
    }
};