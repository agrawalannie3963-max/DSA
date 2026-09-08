class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {;
//         int n=nums.size();
//         int i=0;
//         int j=i+1;
//         int idx;
//         int idx1;
//         for(i=0;i<n;i++)
//         {
//             if(nums[i]>nums[j])
//             {
//                 i++;
//                 j++;
//             }
//             if(nums[i]<=nums[j] && i<j)
//             {
//                  idx=i;
//                 j++;
//                 if(nums[i]>nums[j])
//                 {
//                     idx1=j;
//                     break;
//                 }  
//             }      
//             idx1=j;  
//         }
//         int c=idx1-idx;
//         return c;
//     }
// };
//         int n=nums.size();
//         int i=0;
//         int j=n-1;
//         int idx;
//         int idx1;
//         if(n==2 && nums[i]>nums[j])
//         {
//              return 0;
//         }
//         while(i<=j)
//         {
//             if(nums[i]>nums[j] && i<j)
//             {
//                i++;
//             }
//             else if(=>=j)
//             { 
//                   j=n-1;
                  
//             }
//             else if(nums[i]<=nums[j])
//             {
//                 idx=i;
//                 idx1=j;
//                 break;
//             }
//         }
//         int c=idx1-idx;
//         return c;
//     }
// };
// sort(nums.begin(),nums.end());
// for(int i=0;i<n;i++)
// {
//     if()
// }
// int n=nums.size();
// int max=0;
// for(int i=0;i<n;i++)
// {
//     for(int j=i+1;j<n;j++)
//     {
//         if(nums[i]<=nums[j])
//         {
//
//                 int maxtillnow=j-i;
//                 if(maxtillnow>max)
//                 {
//                     max=maxtillnow;
//                 }
//             }
//         }
//     }
// }
// return max;
//  }
// };
// int n=nums.size();
// int max=0;
// int i=0;
// int j=n-1;
// vector<int>aux;
// int n=nums.size();
// int i=n-1;
// aux.push_back(nums[i]);
// int max=nums[n-1];
// for(int i=n-2;i>=0;i--)
// {
//     if(nums[i]>max)
//     {
//         max=nums[i];
//         aux.push_back(max);
//     }

// }
// int max1-0;
// while(j<n && k>=0)
// {
// if(nums[j]<aux[k])
// {
//     k--;
//     int diff=k-j;
//     if(diff>max1)
//     {
//         max1=diff;
//     }
// }
int len=nums.size();
vector<int>aux(len);
int k=len-1;
int m=len-1;
aux[k]=nums[m];
int max=0;
for(m=len-2;m>=0;m--)
{
    if(nums[m]>aux[k])
    {
          aux[k-1]=nums[m];
          k--;
    }
    else
    {     
           aux[k-1]=aux[k];
           k--;

    }

}
int i=0;
int j=0;
while(j<len)
{
    
        while(i<j && nums[i]>aux[j])
        {
            i++;
        }
        
            int maxramp=j-i;
            if(maxramp>max)
            {
                max=maxramp;
            }
            j++;
        
}
return max;
    }
};
