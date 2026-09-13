class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int len1=nums1.size();
        int len2=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>aux;
        while((i<len1)&&(j<len2))
        {
        if(nums1[i]<nums2[j])
        {
            i++;
        }     
        else if(nums1[i]>nums2[j])
        {
            j++;
        }
        else 
        {
            if ((aux.empty())||(nums1[i]!=aux.back()))
            {
            aux.push_back(nums1[i]);
            }
            i++;
            j++;
        }
        }  
        return aux;

    }
};














//(glt hai thoda)
// int n=nums1.size();
// int n1=nums2.size();
// vector<int>aux;
// int i=0;
// int j=0;
// sort(nums1.begin(),nums1.end());
// sort(nums2.begin(),nums2.end());
// while(i<n)
// {
//     while(j<n1)
//     {
//         if(nums1[i]==nums2[j])
//         {
//             if(aux.push_back!=empty && aux.back1=nums[ix])
//             i++;
//             j=0;

//         }
//         else
//         {
//             j++;
//         }
//         if(j==n-1 && aux.push_back(empty))
//         {
//             i++;
//             j=0;
//         }
//     }
//     if(aux.push_back(empty())
//     i++;
//     j=0;
// }
// return aux;
// }
// };



















