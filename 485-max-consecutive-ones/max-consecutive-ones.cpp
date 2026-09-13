class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
//         int len=nums.size();
//         int count=0;
//         int max;
//        for(int i=0;i<len;i++)
//        {
//         if(nums[i]==1)
//         {
//             count++;
//         if(count>max)
//         {
//             max=count;
//         }
//        } 
//        else
//        {
//         count=0;
//        }
//        }
//        return max;
//     }
// };









int n=nums.size();
int count=0;
int max=0;
for(int i=0;i<n;i++)
{
    if(nums[i]==1)
    {
        count++;
        if(count>max)
        {
            max=count;
        }
    }
    else
    {
        count=0;
    }
}
return max;
}
};

















