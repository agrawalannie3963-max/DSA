class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end(),greater());
//         int n=nums.size();
//         int i=0;
//         int count=0;
//         int count1=0;
//         while(i<n-1)
//         {
//             if(nums[i]==nums[i+1] && i!=0)
//             {
//                 count--;
//             }
//             if(nums[i]>nums[i+1]*k)
//             {
//                i++;
//                count++;
//             }
//             else
//             {
//                 i++;
//                 count1++;
//                 if(count1>1)
//                 {
//                     count++;
//                 }
//             }
            
            
//         }
//         return count;
//     }
// };
// sort()
// int max=nums[0];
// int min=nums[0];
// for(int i=0;i<n;i++)
// {
//     if(nums[i]>max)
//     {
//         max=nums[i];
//     }
//     if(nums[i]<min)
//     {
//         min=nums[i];
//     }

// }
// if(max<=min*2)
// {

// }
// sort(nums.begin(),nums.end(),greater());
// int n=nums.size();
// int i=0;
// int j=n-1;
// int count=0;
// while(i<j)
// {
//    if(nums[i]>nums[j]*k)
//    {
//     i++;
//     count++;
//    }
//    else
//    {
//     j--;
//    }
// }


// int m=n-1;
// int l=0;
// while(m>l)
// {
//     if(nums[m]>nums[l]*k)
//     {
//         m--;
//         count--;
//     }
//     else
//     {
//         l++;
//     }
// }
// return count;
// }
// };
// sort(nums.begin(),nums.end());
// int n=nums.size();
// int i=0;
// int c;
// int min=INT_MAX;
// int j=i+1;
//     while(i<n)
//     {
//         if(j<n && nums[j]<= 1LL*nums[i]*k)
//         {
//              j++;
//         }
//         else
//         {
//             c=(n-(j-i));
//             if(c<min)
//             {
//                 min=c;
//             }
//             i++;
//             j=i+1;
//         }
//     }
// if(min==INT_MAX)
// {
//     return 0;
// }
// return min;
// }
// };

sort(nums.begin(),nums.end());
int n=nums.size();
int ans=n;
for(int i=0;i<n;i++)
{
int top=i;
int bottom=n-1;
while(top<=bottom)
{
        int mid=(top+bottom)/2;
        if(nums[mid]>(long long)nums[i]*k)
        {
            bottom=mid-1;
        }
        else
        {
            if(ans>n-(mid-i+1))
            {
            ans=n-(mid-i+1);
            }
              top=mid+1;
          
        }
}
}
return ans;
}
};
