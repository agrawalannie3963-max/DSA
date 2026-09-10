class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

// int n=arr.size();
// int j;
// int i=0;
// while(i<n)
// {
//     if(arr[i]==0)
//     {
//         int idx=i;
//         for(int j=n-1;j>idx;j--)
//         {
//             arr[j]=arr[j-1];
//         }
//         arr[idx]=0;
//         i=i+2;
//     }
//     else
//     {
//         i++;
//     }
// }

//     }
// };
// int n=arr.size();
// int zero_count=0;
// for(int i=0;i<n;i++)
// {
//     if(arr[i]==0)
//     {
//         zero_count++;
//     }
// }
// int fp=n-1;
// int tp=n-zero_count;
// while((fp>=tp)&&(fp!=0)&&(tp!=0))
// {
//     if(arr[tp]!=0)
//     {
//         arr[fp]=arr[tp];
//     }
//     else
//     {
//         arr[fp]=0;
//         fp--;
//         arr[fp]=0;
//     }
//     fp--;
//     tp--;
// }
//     }
// };

int n=arr.size();
int zeroCount=0;
for(int i=0;i<n;i++)
{
    if(arr[i]==0)
    {
        zeroCount++;
    }
}
int tp=n-1;
int fp;
while(tp>=0 && zeroCount!=0)
{
    if(arr[tp]==0)
    {
        zeroCount--;
    }
        fp=tp+zeroCount;
    if(fp<n)
    {
        arr[fp]=arr[tp];
    }
    if(arr[tp]==0)
    {
        if((fp+1)<n)
        {
            arr[fp+1]=0;
        }
        
    }
    tp--;
}
}
};

