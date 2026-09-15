class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
//         sort(arr.begin(),arr.end());
// int len=arr.size();
// int key=0;
// for(int i=0;i<len;i++)
// {
//     key=arr[i]*2;
//     int top=0;
//     int bottom=len-1;
// while(top<=bottom)
// {
//     int mid=(top+bottom)/2;
//     if(arr[mid]<key)
//     {
//         top=mid+1;
//     }
//     else if((arr[mid]==key)&&(mid!=i))
//     {
//         return true;
//     }
//     else
//     {
//         bottom=mid-1;
//     }
// }
// }
// return false;
//     }
// };









sort(arr.begin(),arr.end());
int i;
int n=arr.size();
for(int i=0;i<n;i++)
{
int top=0;
int bottom=n-1;
int key=arr[i]*2;
while(top<=bottom)
{
int mid=(top+bottom)/2;
if(arr[mid]<key)
{
    top=mid+1;
}
else if(arr[mid]==key && mid!=i)
{
    return true;
}
else
{
    bottom=mid-1;
}
}
}
return false;
}
};








