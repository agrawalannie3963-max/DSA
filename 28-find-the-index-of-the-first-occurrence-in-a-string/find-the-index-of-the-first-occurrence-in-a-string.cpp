class Solution {
public:
    int strStr(string haystack, string needle) {
//         int len=haystack.size();
//         int len1=needle.size();
//         for(int i=0;i<len;i++)
//         {
//             if (needle==haystack.substr(i,len1))
//             {
//             return i;
//             }
//         }
//         return -1;
//     }
// };



int n=haystack.size();
int n1=needle.size();
for(int i=0;i<n;i++)
{
   if(needle==haystack.substr(i,n1))
   {
    return i;
   }
}
return -1;
}
};
















