class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        int count=0;
        int i=0;
//         while(i<n && x<=n)
//         {
//             if(nums[i]>=x)
//             {
//                 count++;
//                 i++;
//             }
//             else
//             {
//                 x++;
//                 i=0;
//                 count=0;
//             }
//         }
//         if(count>x)
//         {
//             return -1;
//         }
//         return x;
//     }
// };
while(i<n && x<=n)
{
    if(nums[i]>=x)
    {
        count++;
         i++;
    }
    else
    {
        i++;
    }
    if(i-1==n-1 && (count>x || count<x))
    {
        x++;
        count=0;
        i=0;
    }
    if(i-1==n-1 && count==x)
    {
        break;
    }
}
if(count==0)
{
    return -1;
}
return x;
}
};




