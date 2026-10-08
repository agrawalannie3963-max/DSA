class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        int diff=0;
        int i=0;
        // for(int i=0;i<k;i++)
        
            diff=nums[k-1]-nums[i];

        int diff1=0;
        for(int j=1;j<=len-k;j++)
        {
            int w_start=j;
            int w_end=(j+k)-1;
            int diff1=nums[w_end]-nums[w_start];
        if(diff1<=diff)
        {
           diff=diff1;
        }
        }
        return diff;
        }
        };
        // int len=nums.size();
        // int i=0;
        // int j=i+1;
        // int min=nums[0];
        // if(len==1)
        // {
        //     return 0;
        // }
        // else
        // {
        //   while((i<len-2)&&(j<len-1))
        //   {
        //     if(nums[i]!=nums[j])
        //     {
        //     diff=nums[j]-nums[i];
        //     if(diff<min)
//             {
//                 min=diff;
//             }
                
//             }


//         }
//     }
// };








// sort(nums.begin(),nums.end(),greater());
// int n=nums.size();
// int i=0;
// int j=1;
// int diff1=0;
// if(n==1)
// {
//     return 0;
// }
//     int diff=nums[i]-nums[j];

// for(i=0;i<n-1;i++)
// {
//     for(j=i+1;j<n;j++)
//     {
//         diff1=nums[i]-nums[j];
//         if(diff1<diff)
//         {
//             diff=diff1;
//         }
//     }
// }
// return diff;
// }
// };















