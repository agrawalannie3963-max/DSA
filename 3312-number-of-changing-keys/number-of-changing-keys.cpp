class Solution {
public:
    int countKeyChanges(string s) {
//         int count=0;
//         int n=s.size();
//        for(int i=0;i<n-1;i++)
//        {
//         if(tolower(s[i])!=tolower(s[i+1]))
//         {
//             count++;
//         }
//        }
//        return count;
//     }
// };



















int n=s.size();
int count=0;
for(int i=0;i<n-1;i++)
{
    if((abs(s[i]-s[i+1])!=32)&&(abs(s[i]-s[i+1]!=0)))
    {
        count++;
    }
}
return count;
}
};








