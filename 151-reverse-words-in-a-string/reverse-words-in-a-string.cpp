class Solution {
public:
    string reverseWords(string s) {
        // int len=s.size();
        // int i=0;
        // int j=len-1;
//     while(i<j)
//     {
//         if(((s[i]!=' ')&&(i==0))&&((s[j]!=' ')&&(j==len-1)))
//         {
//             stridx=i;
//             stridx1=j;
//         }
//         if(((s[i]!=' ')&&(i+1==' '))&&((s[j]!=' ')&&(j-1==' ')))
//         {
//             endidx=i;
//             endidx1=j;
//         }
//             for(int k=0;k<len;k++)
//             {

//                 int temp=s[i];
//                 s[i]=s[j];
//                 s[j]=temp;
//                 i++;
//                 j--;
//             }

//                 // ans=ans+s[i];
//                 //  i++;
//                 //  j--;
//             }
//         }
//         return s;
//     }
// };
int len=s.size();
int m=0;
int n=len-1;
while(n>=0 && s[n]==' ')
{
    n--;
}
while(m<len && s[m]==' ')
{
    m++;
}
s=s.substr(m,n-m+1);
m=0;
n=s.size()-1;
while(m<n)
{
int temp=s[m];
s[m]=s[n];
s[n]=temp;
m++;
n--;
}
int len1=s.size();
int i=0;
int l=0;
int r=0;
while(i<len1)
{
    while(i<len1 && s[i]!=' ')
    {
        r=i;
        i++;
    }
    int r_copy=r;
    int l_copy=l;
    while(l_copy<r_copy)
    {
          int temp1=s[l_copy];
          s[l_copy]=s[r_copy];
          s[r_copy]=temp1;
          l_copy++;
          r_copy--;
    }
    while(i<len1 && s[i]==' ')
    {
         l=i+1;
         i++;
    }
}
int len2=s.size();
    for(int k=0;k<len2;k++)
    {
        if(s[k]==' ' && s[k+1]==' ')
        {
            s.erase(k,1);
            k--;
        }
    }
    return s;

}
};

// int len=s.size();
// int m=0;
// int n=len-1;
// while(m<n)
// {
//     int temp=s[m];
//     s[m]=s[n];
//     s[n]=temp;
//     m++;
//     n--:
// }
// int len1=s.size();
// int l=0;
// int i;
// int r;
// while(i<n)
// {
// if(s[i]!=' '&& i<len)
// {
    
// }





