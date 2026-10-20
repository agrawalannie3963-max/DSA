class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int n1=nums2.size();
        int i=0;
        int j=0;
        int count=0;
        vector<int>aux;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<n)
        {
            int j=0;
            while(j<n1)
            {
                if(nums1[i]==nums2[j])
                {
                    if((count>0)&&(aux.back()!=nums1[i]))
                    {
                      aux.push_back(nums1[i]);
                      count++;
                      break;
                    }
                    else if(count==0)
                    {
                        aux.push_back(nums1[i]);
                        count++;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    j++;
                }

            }
            i++;
        }
        return aux;
            
    }
};