class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
//         int n1=batteries.size();
//         int sum=0;
//         for(int j=0;j<n1;j++)
//         {
//             sum=sum+batteries[j];
//         }
//         int m=sum/n;
//         int count=1;
//         int c=0;
//         int ans=0;
//         int i;
//         while(count<=m)
//         {
//             c=0;
//         for(i=0;i<n1;i++)
//         {
//             c=c+min(batteries[i],count);
//         }
//         if(count*n<=c && count<=m)
//         {
//              ans=count;
//              i=0;
//              count++;
//         }
//         else
//         {
//             break;
//         }
//         }
//         return ans;
        
//     }
// };
long long int sum=0;
int n1=batteries.size();
for(int j=0;j<n1;j++)
{
    sum=sum+batteries[j];
}
long long int m=sum/n;
long long int top=0;
long long int bottom=m;
long long int c=0;
long long int ans=0;
long long int mid=0;
while(top<=bottom)
{
    c=0;
    mid=(top+bottom)/2;
    for(int i=0;i<n1;i++)
    {
        c=c+min((long long)batteries[i],mid);
    }
    if(mid*n<=c)
    {
        ans=mid;
        top=mid+1;
    }
    else
    {
        bottom=mid-1;
    }
}
return ans;
}
};