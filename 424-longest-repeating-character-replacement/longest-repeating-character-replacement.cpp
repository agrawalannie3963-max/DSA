class Solution {
public:
    int characterReplacement(string s, int k) {
//         int n=s.size();
//         long long int i=0;
//         long long int j=0;
//         int count=0;
//         int count1=0;
//         int max1=0;
//         int max2=0;
//         while(j<n)
//         {
//         if(s[j]=='A')
//         {
//             j++;
//         }
//         else
//         {
//             count++;
//             while(count>k)
//             {
//                 if(s[i]=='B')
//                 {
//                     count--;
//                 }
//                 i++;
//             }
//             j++;
//         }
//         int len=j-i;
//         if(len>max1)
//         {
//             max1=len;
//         }
//         }
//         int l=0;
//         int m=0;
//         while(m<n)
//         {
//         if(s[m]=='B')
//         {
//             m++;
//         }
//         else
//         {
//             count1++;
//             while(count1>k)
//             {
//                 if(s[l]=='A')
//                 {
//                     count1--;
//                 }
//                 l++;
//             }
//             m++;
//         }
//         int len1=m-l;
//         if(len1>max2)
//         {
//             max2=len1;
//         }
//         }
//         int c=max(max1,max2);
//         return c;

//     }
// }
int n=s.size();
int count=0;
int max=0;
int ch;
int i=0;
int j=i;
for(ch='A';ch<='Z';ch++)
{
     count=0;
     i=0;
     j=i;
    while(j<n)
    {
    if(s[j]==ch)
    {
         j++;
    }
    else
    {
        count++;
        while(count>k)
        {
            if(s[i]!=ch)
            {
                count--;
            }
            i++;
        }
        j++;
    }
    int len=j-i;
    if(len>max)
    {
        max=len;
    }
}
}
return max;
    }
};