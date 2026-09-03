class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n=name.size();
        int n1=typed.size();
        int i=0;
        int j=0;
        if(typed[j]!=name[i])
        {
            return false;
        }
        while(i<=n || j<n1)
        {
                if(typed[j]==name[i])
                {
                    i++;
                    j++;
                }
                else if(typed[j]!=name[i])
                {
                    if((n>=1)&&(typed[j]==name[i-1]))
                    {
                        j++;
                    }
                    // else if((typed[j]!=name[i])&&(i==0)&&(j==0))
                    // {
                    //     j++;
                    //     i++;
                    else
                    {
                        return false;
                    }
                }
                // else if(n==1 && n1==1)
                // {
                //     if(name[i]!=typed[j])
                //     {
                //         return false;
                //     }
                // }
        }
        return true;
}
};
        //         if(name[i]==typed[j])
        //         {
        //             count++;
        //             idx=j;
        //         }
        //         else
        //         {
        //             i++;
        //             j=idx+1;
        //         }
        //     }
        // }
        // if(count>1)
        // {
        //     return true;
        // }