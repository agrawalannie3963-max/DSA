class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        // int len=nums.size();
        // int i=0;

//         while(i<=p-1)
//         {
//             if(nums[i]<nums[i+1])
//             {
//                i++;
//             }
//         }
//         while(i<=q-1)
//         {
//             if(nums[i]>nums[i+1])
//             {
//                 i++;
//             }
//         }
//         while(i<len-1)
//         {
//             if(nums[i]<nums[i+1])
//             {
//                 i++;
//             }
//         }
//         if(i==len-1)
//         {
//             return true;
//         }
//         return false;



//     }
// };
// while((i<len-1)&&(nums[i]<nums[i+1]))
// {
//     i++;
// }
// if(i==0||i==len-1)
// {
//     return false;
// }
// int phase1=i;
// while((i<len-1)&&(nums[i]>nums[i+1]))
// {
//     i++;
// }
// if(i==len-1||i==phase1)
// {
//     return false;
// }
// while((i<len-1)&&(nums[i]<nums[i+1]))
// {
//     i++;
// }
// if(i==len-1)
// {
//     return true;
// }
// return false;
// }
// };







int len=nums.size();
int i=0;
int idx;
while(i<len-1 && nums[i]<nums[i+1])
{
    i++;
     idx=i;
}
if(i==0 || i==len-1)
{
    return false;
}

while(i<len-1 && nums[i]>nums[i+1])
{
    i++;
}
if(i==idx||i==len-1)
{
    return false;
}
while(i<len-1 && nums[i]<nums[i+1])
{
    i++;
}
if(i==len-1)
{
    return true;
}
return false;
}
};
















