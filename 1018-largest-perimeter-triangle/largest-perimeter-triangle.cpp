class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
//         int len=nums.size();
//         int maxp=0;
//         int currp=0;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<len-2;i++)
//         {
//            if(nums[i]+nums[i+1]>nums[i+2])
//           {
//             currp=nums[i]+nums[i+1]+nums[i+2];
//             if(currp>maxp)
//             {
//                 maxp=currp;
//             }
//           }
//         }
//         return maxp;
//     }
// };












int n=nums.size();
sort(nums.begin(),nums.end());
int i=0;
int sum=0;
int max=0;
while(i<n-2)
{
    if(nums[i]+nums[i+1]>nums[i+2])
    {
        sum=nums[i]+nums[i+1]+nums[i+2];
        if(sum>max)
        {
            max=sum;
        }
        i++;
    }
    else
    {
        i++;
    }
    
}
return max;
}
};














