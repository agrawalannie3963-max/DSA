class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
//         int n=arr.size();
//         int count=0;
//          for(int i=0;i<n-3;i++)
//          {
//             int c=arr[i]+arr[i+1]+arr[i+2];
//             int p=c/k;
//             if((p)>=threshold)
//             {
//                 count++;
//             }
//          }
//          return count;
//     }
// };
int n=arr.size();
int sum=0;
int max_sum=0;
int count=0;
for(int i=0;i<k;i++)
{
    sum=sum+arr[i];
}
int currsum=sum;
int copy=currsum/k;
if(copy>=threshold)
{
    count++;
}
for(int j=1;j<=n-k;j++)
{
    int w_start=j;
    int w_end=(j+k)-1;
    currsum=currsum-arr[j-1]+arr[w_end];
    copy=currsum/k;
    if(copy>=threshold)
    {
        count++;
    }
}
return count;
    }
};
