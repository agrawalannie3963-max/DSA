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
string aux;
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
aux=s.substr(m,n-m+1);
m=0;
n=aux.size()-1;
while(m<n)
{
int temp=aux[m];
aux[m]=aux[n];
aux[n]=temp;
m++;
n--;
}
int len1=aux.size();
int i=0;
int l=0;
int r=0;
while(i<len1)
{
    while(i<len1 && aux[i]!=' ')
    {
        r=i;
        i++;
    }
    int r_copy=r;
    int l_copy=l;
    while(l_copy<r_copy)
    {
          int temp1=aux[l_copy];
          aux[l_copy]=aux[r_copy];
          aux[r_copy]=temp1;
          l_copy++;
          r_copy--;
    }
    while(i<len1 && aux[i]==' ')
    {
         l=i+1;
         i++;
    }
}
int len2=aux.size();
    for(int k=0;k<len2-1;k++)
    {
        if(aux[k]==' ' && aux[k+1]==' ')
        {
            aux.erase(k,1);
            k--;
        }
    }
    return aux;

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





