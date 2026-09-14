class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    //     int len=candies.size();
    //     vector<bool>ans;
    //     int max=0;
    //     for(int i=0;i<len;i++)
    //     {
    //         if(candies[i]>max)
    //         {
    //             max=candies[i];
    //         }
    //     }
    //     for(int j=0;j<len;j++)
    //     {
    //     if(candies[j]+extraCandies>=max)
    //     {
    //         ans.push_back(true);
    //     }
    //     else if(candies[j]+extraCandies<max)
    //     {
    //         ans.push_back(false);
    //     }
    //     }
    //     return ans;

    // }
// };


int n=candies.size();
int max=0;
vector<bool>aux;
for(int i=0;i<n;i++)
{
    if(candies[i]>max)
    {
        max=candies[i];
    }
}
for(int j=0;j<n;j++)
{
    if(candies[j]+extraCandies>=max)
    {
        aux.push_back(true);
    }
    else
    {
        aux.push_back(false);
    }
}
return aux;
}
};


















