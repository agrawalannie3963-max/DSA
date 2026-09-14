class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int len=cost.size();
        sort(cost.begin(),cost.end());
        // while(i<len-2)
        // {
        //     if(min(cost[i],cost[i+1])<=cost[i+2])
        //     {
        //         mincost=cost[i]+cost[i+1];
        //         i++;
        //     }
        //     else if(min(cost[i],cost[i+1]<=cos[i-1]))
        //     {
        //        mincost=cost[i]+cost[i+1];
        //        i++;
        //     }
        // }
        // return 
//         int c=0;
//         int i=len-1;
//         if(len==2)
//         {
//             mincost=cost[i]+cost[i-1];
//         }
//         else if(len==1)
//         {
//             mincost=cost[i];
//         }
//         else
//         {
//         while(i>=0)
//         {
//             c=min(cost[i],cost[i-1]);

//             if(c>=cost[i-2])
//             {
//                 mincost=mincost+cost[i]+cost[i-1];
//                 i=i-2;
//             }
//             i--;
//         }
//         }
//         return mincost;
//     }
// };
// int j=len-1;
// int i=len-2;
// int mincost=0;
// while(j>=0)   
// {
//     mincost=mincost+cost[j];
// if(i>=0)
// {
//     mincost=mincost+cost[i];
// }
//     i=i-3;
//     j=j-3;
// }
// return mincost;
//     }
// };













int n=cost.size();
sort(cost.begin(),cost.end());
int i=n-1;
int j=n-2;
int sum=0;
if(n==1)
{
    return cost[i];
}
while(i>=0)
{
    sum=sum+cost[i];
if(j>=0)
{
    sum=sum+cost[j];
}
i=i-3;
j=j-3;
}
return sum;
    }
};


















