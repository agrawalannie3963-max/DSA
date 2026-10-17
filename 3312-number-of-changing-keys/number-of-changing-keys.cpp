class Solution {
public:
    int countKeyChanges(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(abs(s[i]-s[i+1])!=32 && abs((s[i]-s[i+1])!=0))
            {
                count++;
            }
        }
        return count;
    }
};