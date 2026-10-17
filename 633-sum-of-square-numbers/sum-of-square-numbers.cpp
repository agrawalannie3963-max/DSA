class Solution {
public:
    bool judgeSquareSum(int c) {
        // int sum=0;
    //     for(int i=0;i<=c;i++)
    //     {
    //          sum=(i*i)+((i+1)*(i+1));
    //          if(sum==c)
    //          {
    //             return true;
    //          }
    //     }
        
    //         return false;
    
    // }
//};

long long int low=0;
long long int high=sqrt(c);
long long int sum=0;
while((low<=high)&&(sum!=c))
{
    sum=low*low+high*high;
    if(sum<c)
    {
        low=low+1;
    }
    else if(sum>c)
    {
        high=high-1;
    }
}
if(sum==c)
{
    return true;
}
return false;
    }
};