class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
//         int n=nums.size();
//         int count=0;
//         int max=0;
//         int i=0;
//         int flag=1;
//            while(i<n)
//            {
//             int j=i+1;
//             while(j<n)
//             {
//                  if((nums[i]==minK)&&(nums[j]<maxK||nums[j]==maxK))
//                  {
//                     if(nums[j]>=max)
//                     {
//                         max=nums[j];
//                     }
//                     if(max==maxK)
//                     {
//                         count++;
//                     }
//                      j++;
//                  }
//                  if((nums[i]==minK)&&(nums[j]>maxK))
//                  {
//                     flag=0;
//                     break;
//                  }
//                  if(nums[i]!=minK)
//                  {
//                      i++;
//                  }
//             }
//             if(j==n)
//             {
//             i++;
//             }
//             if(flag==0)
//             {
//                 break;
//             }
//         }

//         return count;
//     }
// };
// int n=nums.size();
// int i=0;
// int count=0;
// for(int i=0;i<n;i++)
// {
//     int curr_min=nums[i];
//     int curr_max=nums[i];
// for(int j=i;j<n;j++)
// {
//     if(nums[j]<curr_min)
//     {
//         curr_min=nums[j];
//     }
//     if(nums[j]>curr_max)
//     {
//         curr_max=nums[j];
//     }
//     if(curr_min==minK && curr_max==maxK)
//     {
//         count++;
//     }
// }
// }
// return count;
// }
// };
int n=nums.size();
int gi=-1;
int si=-1;
int rai=-1;
long long int ans=0;
for(int i=0;i<n;i++)
{
    if(nums[i]==minK)
    {
        si=i;
    }
    if(nums[i]==maxK)
    {
        gi=i;
    }
    if((nums[i]<minK)||(nums[i]>maxK))
    {
        rai=i;
    }
    if((min(gi,si)-rai)>0)
    {
        int x=min(gi,si)-rai;
        ans=ans+x;
    }

}
return ans;
}
};

