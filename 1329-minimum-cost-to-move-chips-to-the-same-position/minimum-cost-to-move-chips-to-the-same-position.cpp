class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
//        int len=position.size(); 
//        int odd=0;
//        int even=0;
//       for(int i=0;i<len;i++)
//        {
//        if(position[i]%2==0)
//        {
//           even++;
//        }
//        else
//        {
//         odd++;
//        }
//     }
//     return min(even,odd);
//     }
// };










int n=position.size();
int even=0;
int odd=0;
for(int i=0;i<n;i++)
{
    if(position[i]%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
}
int c=min(even,odd);
return c;
}
};





















