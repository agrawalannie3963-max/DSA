class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1;
        int count=0;
        time=time%(2*(n-1));
        if(n==2 && time%2!=0)
        { 
            return n;

        }
        while(count<time)
        {
        while(i!=n)
        {
            if(count>=time)
            {
                return i;
            }
            i++;
            count++;
        }
        if(count==time)
        {
            return i;
        }
        if(i==n)
        {
        while((count<time)&&(i!=1))
        {
            if(count>=time)
            {
                return i;
            }
         i--;
         count++;
        }
        }
       
        if(i==1)
        {
            while(count<time)
            {
                if(count>=time)
                {
                    return i;
                }
            i++;
            count++;
            }
        }
        }
        return i;
    }
};