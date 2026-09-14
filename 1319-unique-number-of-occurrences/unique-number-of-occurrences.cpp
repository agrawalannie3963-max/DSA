class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    //     int len=arr.size();
    //     vector<int>freq(2001,0);
    //     int i=0;
    //     if(len==1)
    //     {
    //         return true;
    //     }
    //     for(i=0;i<len;i++)
    //     {
    //     if(arr[i]>0)
    //     {
    //         freq[arr[i]]++;
    //     }
    //     else
    //     {
    //          freq[1000-arr[i]]++;
    //     }
    //     }
        
    //         sort(freq.begin(),freq.end(),greater());
    //     int k=0;
    //     int len1=0;
    //     while(freq[k]!=0)
    //     {
    //           len1=len1+1;
    //           k++;
    //     }
    //     for(int c=0;c<len1-1;c++)
    //     {
    //         if(freq[c]==freq[c+1])
    //         {
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    // };
        // int i=0;
        // int j=i+1;
        // int count=0;
        // int count1=0;
        // int idx=0;
        // for(int i=0;i<len-1;i++)
        // {
        //     if(arr[i]==arr[j])
        //     {
        //         count++;
        //         i++;
        //         j++;
        //         idx=j;
        //     }
        // }
        // int c=k+1;
        // int idx1=0;
        // if(idx!=len-1)
        // {
        // for(int k=idx+1;k<len-1;k++)
        // {
        //   if(arr[k]==arr[c])
        //   {
        //     count1++;
        //     k++;
        //     c++;
        //     idx1=c;
//           }
//         }
//         if
//         for(int m=idx1+1;m<len-1;m++)
//         {
//             if(arr[m]==)
//         }

//     }
// };
// int i=0;
// int j=i+1;
// int count=1;
// while(i<len-1)
// {
//      if(arr[i]==arr[j])
//      {
//         count++;
//         i++;
//         j++;
//      }
//      aux.push_back(count);
//      else
//      {
//         count=0;
//      }
// }
//    temp=set(aux);
//    return true;













int n=arr.size();
vector<int>aux(2001,0);
for(int i=0;i<n;i++)
{
if(arr[i]>0)
{
    aux[arr[i]]++;
}
else
{
     aux[1000-arr[i]]++;
}
}
sort(aux.begin(),aux.end(),greater());
int k=0;
int len1=0;
while(aux[k]!=0)
{
     len1=len1+1;
    k++;
}
for(int j=0;j<len1-1;j++)
{
      if(aux[j]==aux[j+1])
      {
             return false;
      }
}
return true;
}
};

























