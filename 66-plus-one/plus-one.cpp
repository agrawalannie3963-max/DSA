class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        for(int i=n-1;i>=0;i--)
        {
        if(digits[i]<9)
        {
            digits[i]=digits[i]+1;
            for(int j=0;j<n;j++)
            {
                return digits;
            }
        }
        digits[i]=0;
        }
        vector<int>aux(n+1,0);
        aux[0]=1;
        return aux;
    }
};