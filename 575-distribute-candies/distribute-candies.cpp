class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        // int n=candyType.size();
//         sort(candyType.begin(),candyType.end());
//         int eat=0;
//         int i=0;
//         int j=i+1;
//         int count=1;
//         int len=candyType.size();
//         if(n%2==0)
//         {
//             eat=n/2;
//         }
//         while(j<len)
//         {
//             if(candyType[i]!=candyType[j])
//             {
//                 count++;
//                 i++;
//                 j++;
//             }
//             else
//             {
//             i++;
//             j++;
//             }
//         }
//         if(count==eat)
//         {
//             return eat;
//         }
//         else if(count>eat)
//         {
//             return eat;
//         }
//         else 
//         {
//             return count;
//         }
//     }
// };





sort(candyType.begin(),candyType.end());
int n=candyType.size();
int eat=n/2;
int count=1;
int i=0;
while(i<n-1)
{
    if(candyType[i]!=candyType[i+1])
    {
        count++;
        i++;
    }
    else
    {
         i++;
    }
}
if(count>eat)
{
    count=eat;
}
return count;
}
};

















