class Solution {
public:
    int findLHS(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());

//     int len=0;
//     int maxlen=0;
//     int R=1;
//     for(int L=0;L<n;L++)
//     {
//         while((R<n)&&(nums[R]-nums[L]<=1))
//         {
//             if(nums[R]-nums[L]==1)
//             {
//                 len=(R-L)+1;
//             }
//                 R++;
//         }
//             maxlen=max(len,maxlen);
//         }
//     return maxlen;
//     }
// };








// sort(nums.begin(),nums.end());
// int n=nums.size();
// int sub;
// int max=0;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         if(nums[j]-nums[i]==1)
//         {
//             sub=j-i+1;
//             if(sub>max)
//             {
//                 max=sub;
//             }
//         }
//     }
// }
// return max;
// }
// };

int n=nums.size();
int max=0;
sort(nums.begin(),nums.end());
int i=0;
int j=0;
int count=0;
int k=n-1;
int m=0;
// while(nums[k]-nums[m]==1)
// {
//      return (k-m)+1;
// }
    //  k--;
    //  m++;
while(j<n)
{
    while(nums[j]-nums[i]>1)
    {
        i++;
    }
    if(nums[j]-nums[i]==1)
    {
        count=j-i+1;
        if(count>max)
        {
            max=count;
        }
    }
    j++;

}
return max;
    }
};








