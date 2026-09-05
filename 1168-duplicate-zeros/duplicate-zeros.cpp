class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
//         int n=arr.size();
//         int i=0;
//         int count=1;
//         while(i<n-1)
//         {
//             if(arr[i]==0)
//             {
//                 arr[i+1]=0;
//                 i=i+2;
//                 count++;
//             }
//             else
//             {
//             i++;
//             count++;
//             }
//             if(count==n)
//             {
//                 break;
//             }
//         }
//     }
// };
int n=arr.size();
int j;
int i=0;
while(i<n)
{
    if(arr[i]==0)
    {
        int idx=i;
        for(int j=n-1;j>idx;j--)
        {
            arr[j]=arr[j-1];
        }
        // arr[idx]=0;
        i=i+2;
    }
    else
    {
        i++;
    }
}
// for(int j=0;j<n;j++)
// {
//     arr.push_back(arr[j]);
// }
    }
};

