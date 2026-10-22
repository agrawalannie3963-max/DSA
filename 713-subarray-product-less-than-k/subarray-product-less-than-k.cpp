class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         int n=nums.size();
//         long long int count=0;
//         for(int ws=1;ws<=n;ws++)
//         {
//             for(int i=0;i<=n-ws;i++)
//             {
//                 int lw=i;
//                 int rw=(lw+ws)-1;
//                 double pro=1;
//                 for(int j=lw;j<=rw;j++)
//                 {

//                     pro=(double)pro*nums[j];
//                 }
//                 if(pro<k)
//                 {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };
//     int i=0;
//     int j=i;
//     while(j<n)
//     {
//         if((nums[j]*prev)<k)
//         {
//             j++;
//             prev=prev*nums[j];
//         }
//         else
//         {
//             int prev=1;
//             if((nums[i]*prev)<k)
//             {
//                 count--;
//                 prev=nums[i]*prev;
//                 i++;
//             }
//          j++;
//         }
//     }
//         return count;
//     }

// };
              
        //         int lw=i;
        //         int rw=(lw+ws)-1;
        //         double pro=1;
        //         for(int j=lw;j<=rw;j++)
        //         {

        //             pro=(double)pro*nums[j];
        //         }
        //         if(pro<k)
        //         {
        //             count++;
        //         }
        //     }
        // }
int n=nums.size();
int i=0;
 int j=i;
int  pro=1;
 int count=0;
if(k==0 || k==1)
{
    return 0;
}
while(j<n)
{
    pro=pro*nums[j];
    if((int )pro<k)
    {
        count=count+(j-i)+1;

    }
    else
    { 
        while(pro>=k)
        {
            pro=(pro/nums[i]);
            i++;
        }
        count=count+(j-i)+1;
    }
    j++;
}
return count;
    }
};
