class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int n1=nums2.size();
        // int i=0;
        // int j=0;
        // int max=0;
//         while(i<n)
//         {
//             while(j<n1)
//             {
//                 if(nums1[i]<=nums2[j] && i<=j)
//                 {
//                      int diff=abs(j-i);
//                      if(diff>max)
//                      {
//                         max=diff;
//                      }
//                      j++;
//                 }
//                 else
//                 {
//                     j++;
//                 }
//             }
//             i++;
//             j=0;
//         }
//         return max;
//     }
// };
int i=0;
int j=0;
int max=0;
while(j<n1 && i<n)
{
    if(nums1[i]>nums2[j])
    {
        i++;
    }
    else
    {
        int maxramp=j-i;
        if(maxramp>max)
        {
            max=maxramp;
        }
        j++;
    }
}
return max;
    }
};





