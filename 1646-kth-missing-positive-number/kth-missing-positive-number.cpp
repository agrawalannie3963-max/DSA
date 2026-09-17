class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // int n=arr.size();
        // int miss=1;
        // int i=0;
        // while(i<n)
        // {
        //     if(arr[i]!=miss)
        //     {
        //         miss++;
        //         k--;
        //         if(k==0)
        //         {
        //             return miss;
        //         }
        //     }
        //     else
        //     {
        //         miss++;
        //         i++;
        //     }
        // }
        // return k+arr[n-1];

        int n=arr.size();
        int top=0;
        int bottom=n-1;
        int misselement;
        while(top<=bottom)
        {
            int mid=(top+bottom)/2;
            int misselement=arr[mid]-(mid+1);
            if(misselement<k)
            {
                 top=mid+1;
            }
            else if(misselement==k)
            {
                bottom=mid-1;
            }
            else 
            {
                bottom=mid-1;
            }
        }
        return top+k;


        }
};