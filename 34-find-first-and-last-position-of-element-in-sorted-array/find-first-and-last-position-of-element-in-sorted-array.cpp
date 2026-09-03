class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        
                // int copy=nums[mid];
                // int copy1=mid;
                // int copy2=mid;
                // int i=mid-1;
                // int flag=1;
                // int right=mid;
                // int left=mid;
                // while(flag==1)
                // {
                //     if((nums[right]!=nums[mid])&&(nums[left]!=nums[mid]))
                //     {
                //         flag=0;
                //     }
                //     if((right<n)&&(nums[right]==nums[mid]))
                //     {
                //         right++;
                //     }
                //     if((left>=0)&&(nums[left]==nums[mid]))
                //     {
                //         left--;
                //     }
                // }
                // if(nums[mid-1]==target)
                // {
                //     high=mid-1;
                // }
                // if(mid==0 && nums[mid]==target)
                // {
                //      aux.push_back(mid);
                // }
                // if(nums[mid+1]==target)
                // {
                //     low=mid+1;
                // }
                // if()
                // aux.push_back(left+1);
                // aux.push_back(right-1);
                // return aux;

                // if(nums[i]==copy)
                // {
                //     mid=mid-1;
                //     i--;
                // int mid1=mid;
                // aux.push_back(mid1);
                // }
                // int j=copy1+1;
                // if(nums[j]==copy)
                // {
                //     copy1=copy1+1;
                //     j++;
                //     int mid2=copy1;
                //     aux.push_back(mid2);
                // }
                // aux.push_back(copy2);
                // return aux;
//             }

//             else
//             {
//                 bottom=mid-1;
//             }
//         }
//         aux.push_back(-1);
//         aux.push_back(-1);
//         return aux;
//     }
// };
int top=0;
int bottom=n-1;
vector<int>aux;
int first=-1;
int last=-1;
int mid;
int mid1;
while(top<=bottom)
{
    int mid=(top+bottom)/2;
    if(nums[mid]<target)
    {
        top=mid+1;
    }
    else if(nums[mid]==target)
    {
        first=mid;
        bottom=mid-1;

        //  if((nums[mid-1]==target)&&(mid!=0))
        //  {
        //     bottom=mid-1;
        //  }
        //  else
        //  {
        //     aux.push_back(mid);
        //     break;
        //  }
    }
    else
    {
        bottom=mid-1;
    }
}
top=0;
bottom=n-1;
while(top<=bottom)
{
    int mid1=(top+bottom)/2;
    if(nums[mid1]<target)
    {
        top=mid1+1;
    }
    else if(nums[mid1]==target)
    {
    //     if((nums[mid1+1]==target)&&(mid1!=n-1))
    //     {
    //         top=mid1+1;
    //     }
    //     else
    //     {
    //         aux.push_back(mid1);
    //         break;
    //     }
    // }
    last=mid1;
    top=mid1+1;
    }
    else
    {
        bottom=mid1-1;

    }
}
return {first,last};
}
};
