class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int sum=nums[i];
        int ans=0;
        int min=INT_MAX;
//         while(j<n)
//         {
//             if(sum>=target)
//             {
//                ans=(j-i)+1;
//                if(ans<min)
//                {
//                  min=ans;
//                }
//                sum=sum-nums[i];
//                i++;
//             //    if(sum<target)
//             //    {
//             //    j++;
//             //    sum=sum+nums[j];
//             //    }
//             }
//             else
//             {
//                j++;
//                sum=sum+nums[j];
//             }
//         }
//         return min;
//     }
// };

while(j<n)
{
    if(sum<target)
    {
       j++;
       if(j<n)
       {
       sum=sum+nums[j];
       }
    }
    else
    {
        ans=(j-i)+1;
        if(ans<=min)
        {
            min=ans;
        }
        sum=sum-nums[i];
        i++;
    }
}
if(min==INT_MAX)
{
    return 0;
}
return min;
    }
};