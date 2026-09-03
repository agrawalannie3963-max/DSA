class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        // int i,count=0,flag;
        // int len=arr.size();
        // for(i=0;i<len;i++)
        // {
        // if((arr[i]%2!=0))
        // {
        //     count++;
        //     if(count==3)
        //     {
        //         return true;
        //     }
        // }
        // else
        // {
        //     count=0;
        // }
        // }
        // return false;
        // }












int n=arr.size();
int count=0;
for(int i=0;i<n;i++)
{
    if(arr[i]%2!=0)
    {
        count++;
    if(count==3)
    {
            return true;
            break;
    }
    }
    else
    {
        count=0;
    }
}
return false;
}
};