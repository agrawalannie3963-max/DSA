class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int total=m+n;
        int elementlh=((m+n)+1)/2;
        int elementrh=(m+n)/2;
        int l1=INT_MIN;
        int l2=INT_MIN;
        int r1=INT_MAX;
        int r2=INT_MAX;
        double i=0;
        if(m>n)
        {
            return findMedianSortedArrays(nums2,nums1);
        }
        // if(m==0 && n==1)
        // {
        //     double k = nums2[i];
        //     return k;
        // }
        // if(m==2 && n==0)
        // {
        //     double k=(nums1[i]+nums1[i+1])/2.0;
        //     return k;
        // }
        // else if(m>=1 && n==0)
        // {
        //     double k=nums1[i];
        //     return k;
        // }
        int top=0;
        int bottom=m;
         
        while(top<=bottom)
        {
            int mid1=(top+bottom)/2;
            int mid2=(elementlh-mid1);
            int lidx1=mid1-1;
            int lidx2=mid2-1;
            int ridx1=mid1;
            int ridx2=mid2;
            if(lidx1>=0)
            {
            l1=nums1[lidx1];
            }
            else
            {
                l1=INT_MIN;
            }
            if(lidx2>=0)
            {
                l2=nums2[lidx2];
            }
            else
            {
                l2=INT_MIN;
            }
            if(ridx1<m)
            {
            r1=nums1[ridx1];
            }
            else
            {
                r1=INT_MAX;
            }
            if(ridx2<n)
            {
            r2=nums2[ridx2];
            }
            else
            {
                r2=INT_MAX;
            }
            if(l1<=r2 && l2<=r1)
            {
                if(total%2==0)
                {
                    double c=(max(l1,l2)+min(r1,r2))/2.0;
                    return c;
                }
                else
                {
                    double d=max(l1,l2);
                    return d;
                }
            }
            else if(l1>r2)
            {
                bottom=mid1-1;
            }
            else
            {
                top=mid1+1;
            }
        }
            return 0.0;
        }
};

