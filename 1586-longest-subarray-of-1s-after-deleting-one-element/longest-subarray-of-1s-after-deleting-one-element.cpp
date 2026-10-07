class Solution {
public:
    int longestSubarray(vector<int>& nums) {
//         int n=nums.size();
//         int count=0;
//         int maxcount=0;
//         for(int i=0;i<n;i++)
//         {
//             int count=0;
//             for(int j=0;j<n;j++)
//             {
//                 if(j==i)
//                 {
//                     continue;
//                 }
//                 else
//                 {
//                     if(nums[j]==1)
//                     {
//                         count++;
//                         if(count>=maxcount)
//                         {
//                             maxcount=count;
//                         }
//                     }
//                     else
//                     {
//                         count=0;
//                     }
//                 }
//             }
//         }
//     return maxcount;
//     }
// };
int i=0;
int j=0;
int n=nums.size();
int count0=0;
int maxsubarr=0;
int subarr=0;
while(j<n)
{
    if(nums[j]==0)
    {
        count0++;
    }
    while(count0==2)
    {
       if(nums[i]==0)
        {
        count0--;
        }
        i++;
    }
        subarr=j-i;
        if(subarr>maxsubarr)
        {
            maxsubarr=subarr;
        }
        j++;
    
}
return maxsubarr;
}
};

















