class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
//         int len=arr.size();
//         int i=0;
//         int idx=0;
//         int count=0;
        
//         while(i<len-1)
//         {
//             if(arr[i]<arr[i+1])
//             {
//                 idx=i+1;
//                 i++;
//             }
//             else 
//             {
//                 return false;
//             }
//             else if()
//             {
//             i++;
//         }
//         int idx1=0;
//         int j=idx;
//        while(j<len-1)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 idx1=j+1;
//                 j++;
//             }
//         }
//         if(idx1==len-1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };
// int i=0;
// int len=arr.size();
// while(i<len-1 && arr[i]<arr[i+1])
// {
//     i++;
// }
// if(i==0||i==len-1)
// {
//     return false;
// }
// while(i<len-1 && arr[i]>arr[i+1])
// {
//     i++;
// }
// if(i==len-1)
// {
//     return true;
// }
// return false;
// }
// };
        
// previdx=arr[0];
//         while(i<=j)
//         {
//           if(arr[i]>arr[j])
//           {
//             return false;
//           }
//           else if(arr[i]<arr[j])
//           {
//              i++;
//              j--;
//           }
//           if(i==j)
//           {
//             arr[i]!=arr[j-1];
//           }

//         }ll
//     }
// };




int i=0;
int len=arr.size();
while(i<len-1 && arr[i]<arr[i+1])
{
    i++;
}
if(i==0 || i==len-1)
{
    return false;
}
while(i<len-1 && arr[i]>arr[i+1])
{
    i++;
}
if(i==len-1)
{
    return true;
}
return false;
}
};














