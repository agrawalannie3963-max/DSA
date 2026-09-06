class Solution {
public:
    int countGoodSubstrings(string s) {
//         int len=s.size();
//         int count=0;
//         int i=0;
//         while(i<len-2)
//         {
//          if((s[i]!=s[i+1])&&(s[i+1]!=s[i+2])&&(s[i+2]!=s[i]))
//             {
//                 count++;
//             }
//         i++;
//         }
//         return count;
//     }
// };
    //     int k=3;
    //     int count=1;
    //     int count1=0;
    //     for(int i=0;i<k;i++)
    //     {
    //         if(s[i]!=s[i+1])
    //         {
    //             count++;
    //         }
    //         if(count==3)
    //         {
    //             count1++;
    //         }
    //     }
    //         for(int j=1;j<=len-k;j++)
    //         {
    //            int  w_start=j;
    //            int  w_end=(j+k)-1;
    //             for(int c=w_start;c<=w_end;c++)
    //             {
    //             if(s[c]!=s[c+1])
    //             {
    //                 count++;
    //             }
    //             else
    //             {
    //                 break;
    //             }
    //             if(count==3)
    //             {
    //                count1++;
    //             }
    //             }
    //         }
    //     return count1;
    //     }
    // };
        // for(int i=0;i<n-2;i++)
        // {
        //     if(s[i]!=s[i+1])
        //     {
        //         count++;
        //     }
        //     else
        //     {
        //         count=0;
        //     }
        //     if(count==3)
        //     {
        //         cout<<count;
        //     }
        // }
        // {
            
//         }
//     }
// };

int n=s.size();
int count=0;
for(int i=0;i<n-2;i++)
{
    if((s[i]!=s[i+1])&&(s[i+2]!=s[i+1])&&(s[i+2]!=s[i]))
    {
       count++;
       
    }
}
return count;
}
};








