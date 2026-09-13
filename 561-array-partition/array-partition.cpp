class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
//         int len=nums.size();
//         int sum=0;
//         int c=0;
//         int i=0;
//         sort(nums.begin(),nums.end());
//         while(i<len-1)
//         {
//            c=min(nums[i],nums[i+1]);
//            sum=sum+c;
//            i=i+2;
//         }
//         return sum;
//     }
// };







int n=nums.size();
int i=0;
int sum=0;
sort(nums.begin(),nums.end());
while(i<n-1)
{
   int x=min(nums[i],nums[i+1]);
   sum=sum+x;
   i=i+2;
}
return sum;
}
};


















