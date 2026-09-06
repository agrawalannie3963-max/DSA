class Solution {
public:
    string reverseVowels(string s) {
        // int l=0;
        // int len=s.size();
        // int r=len-1;
        // int temp;

//         while(l<r)
//         {
//             if(s[l]!='a'&&s[l]!='e'&&s[l]!='i'&&s[l]!='o'&&s[l]!='u'&&s[l]!='A'&&s[l]!='E'&&s[l]!='I'&&s[l]!='O'&&s[l]!='U')
//             {
//                 l++;
//             }
//             if(s[r]!='a'&&s[r]!='e'&&s[r]!='i'&&s[r]!='o'&&s[r]!='u'&&s[r]!='A'&&s[r]!='E'&&s[r]!='I'&&s[r]!='O'&&s[r]!='U')
//             {
//                 r--;
//             }
//              if((s[l]=='a'||s[l]=='i'||s[l]=='e'||s[l]=='o'||s[l]=='u'||s[l]=='A'||s[l]=='E'||s[l]=='I'||s[l]=='O'||s[l]=='U')&&(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u'||s[r]=='A'||s[r]=='E'||s[r]=='I'||s[r]=='O'||s[r]=='U'))
//              {
//              temp=s[l];
//              s[l]=s[r];
//              s[r]=temp;
//              l++;
//              r--;
//              }
//         }
//         return s;
//     }
// };







int n=s.size();
int j=n-1;
int i=0;
while(i<j)
{
    if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')&&(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'))
    {
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;

    }
    else if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
    {
         i++;
    }
    else if((s[j]!='a'&&s[j]!='e'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u'&&s[j]!='A'&&s[j]!='E'&&s[j]!='I'&&s[j]!='O'&&s[j]!='U'))
    {
        j--;
    }
}
return s;
}
};




















        