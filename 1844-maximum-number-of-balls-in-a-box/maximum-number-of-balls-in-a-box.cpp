class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        // vector<int>freq(54,0);
//         for(int i=lowLimit;i<=highLimit;i++)
//         {
//             if(i<10)
//             {
//                 freq[i]++;
//             }
//             else
//             {
//             int sum=0;
//             int copy=i;
//             int rem=0;
//                 while(copy!=0)
//                 {
//                  rem=copy%10;
//                  sum=sum+rem;
//                  copy=copy/10;
//                 }
//                 freq[sum]++;
//             }
//         }
//         sort(freq.begin(),freq.end(),greater());
//             return freq[0];
//                 }
// };


int n=highLimit-lowLimit-1;
vector<int>aux(highLimit+1,0);
for(int i=lowLimit;i<=highLimit;i++)
{
    if(i<10)
    {
        aux[i]=aux[i]+1;
    }
    else
    {
         int sum=0;
         int copy=i;
         int rem=0;
        while(copy!=0)
        {
        rem=copy%10;
        sum=sum+rem;
        copy=copy/10;
        }
        aux[sum]=aux[sum]+1;

    }
}
sort(aux.begin(),aux.end(),greater());
return aux[0];
}
};



















