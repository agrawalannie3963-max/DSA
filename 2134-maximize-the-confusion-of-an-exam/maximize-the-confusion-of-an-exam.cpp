class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
//         int n=answerKey.size();
//         int i=0;
//         int j=i+1;
//         int ans=1;
//         int count=0;
//         while(j<n)
//         {
//             if(answerKey[i]==answerKey[j])
//             {
//                 j++;
//                 ans++;
//             }
//             else if((answerKey[i]!=answerKey[j])&&(answerKey[i]!=answerKey[j+1])&&(ans==1))
//             {
//                 count++;
//                 if(count<=k)
//                 {
//                     ans++;
//                 }
//                 else
//                 {
//                     break;
//                 }
//                 i++;
//                 j=i+1;
//             }
//             else
//             {
//                 // answerKey[j]=answerKey[i];
//                 count++;
//                 if(count<=k)
//                 {
//                     ans++;
//                 }
//                 else
//                 {
//                     break;
//                 }
//                 j++;
//             }

//         }
//         int l=n-1;
//         int ans1=1;
//         int m=l-1;
//         int count1=0;
//         while(m>0)
//         {
//             if((answerKey[l]!=answerKey[m])&&(answerKey[l]!=answerKey[m-1])&&(ans1==1))
//            {
//             count1++;
//             if(count1<=k)
//             {
//                 ans1++;
//             }
//             else
//             {
//                 break;
//             }
//             l--;
//             m=l-1;
//            }
//            else if(answerKey[l]!=answerKey[m])
//            {
//             count1++;
//             if(count1<=k)
//             {
//                 ans1++;
//             }
//             else
//             {
//                 break;
//             }
//             m--;
//            }
//            else
//            {
//             m--;
//             ans1++;
//            }
//         }
//         if(m==0 && count1<k)
//         {
//             ans1=ans1+1;
//         }
//         int c=max(ans,ans1);
//         return c;
// }
// };
// int n=answerKey.size();
// int max=0;
// for(int i=0;i<n;i++)
// {
//     int countT=0;
//     int countF=0;
//     for(int j=i;j<n;j++)
//     {
//         if(answerKey[j]=='T')
//         {
//             countT++;
//         }
//         else
//         {
//             countF++;
//         }
//         if(min(countT,countF)<=k)
//         {
//            int len=j-i+1;
//            if(len>max)
//            {
//             max=len;
//            }
//         }
//     }
// }
// return max;
//     }
// };




int n=answerKey.size();
int i=0;
int j=i;
int max1=0;
int count=0;
int len=0;
while(j<n)
{
    if(answerKey[j]=='F')
    {
        j++;
    }
    else
    {
        count++;
        while(count>k)
        {
           if(answerKey[i]=='T')
           {
               count--;
           }
           i++;
        }
        j++;
    }
     len=j-i;
     if(len>max1)
    {
        max1=len;
    }
     

}
int l=0;
int m=l;
int max2=0;
int count1=0;
int len1=0;
while(m<n)
{
    if(answerKey[m]=='T')
    {
       m++;
    }
    else
    {
        count1++;
        while(count1>k)
        {
            if(answerKey[l]=='F')
            {
                count1--;
            }
            l++;
        }
    m++;
    }
    len1=m-l;
    if(len1>max2)
    {
      max2=len1;
    }
}
int c=max(max1,max2);
return c;
}
};






