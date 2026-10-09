class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
vector<int>aux(n,-1);
if(k==0)
{
    return nums;
}
int l=0;
if(n==1 && k>nums[l])
{
    return aux;
}
if((2*k + 1) > n)
{
    return aux;
}
// for(int i=0;i<=n-k;i++)
// {
//     sum=sum+nums[i];
// }
// long long int avg=(sum)/(n-k+1);
// aux[k]=avg;
// long long int m=0;
// long long int p=n-k+1;
// for(int j=k;j<n-k-1;j++)
// {
//     long long int w_start=nums[m];
//     long long int w_end=nums[p]; 
//     sum=sum-w_start+w_end;
//     m++;
//     p++;
//     long long int avg1=sum/(n-k+1);
//     aux[j+1]=avg1;
// }

// return aux;
//     }
// };
int i=0;
int j=2*k;
long long int sum=0;
int len=j-i+1;
for(int i=0;i<=j;i++)
{
    sum=sum+nums[i];
    int avg=sum/len;
    aux[k]=avg;
}
while(j<n-1)
{
    int w_start=i;
    int w_end=j+1;
    sum=sum-nums[w_start]+nums[w_end];
    i++;
    j++;
    k++;
    int avg1=sum/len;
    aux[k]=avg1;
}
return aux;
    }
};