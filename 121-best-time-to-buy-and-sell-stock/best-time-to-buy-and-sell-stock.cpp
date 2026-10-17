class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int min=INT_MAX;
//         int max=0;
//         int idx=0;
//         int i=0;
//         int profit=0;
//         for(int k=0;k<n;k++)
//         {
//             if(prices[k]<min)
//             {
//                 min=prices[k];
//                 idx=k;
//             }
//         }
//         int buy=min;
//         while(i<n)
//         {
//         if(i>idx)
//         {
//             profit=prices[i]-buy;
//             if(profit>max)
//             {
//                 max=profit;
//             }
//             i++;
//         }
//         else
//         {
//             i++;
//         }
//         }
//         return max;
//     }
// };

int buy=INT_MAX;
int profit=0;
int n=prices.size();
for(int i=0;i<n;i++)
{
    if(prices[i]-buy>profit)
    {
        profit=prices[i]-buy;
    }
    if(prices[i]<buy)
    {
        buy=prices[i];
    }
}
return profit;
}
};