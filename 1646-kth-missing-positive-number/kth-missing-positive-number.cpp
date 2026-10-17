class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>aux(2001,0);
        for(int i=0;i<n;i++)
        {
            aux[arr[i]]++;
        }
        int ans=0;
        int missingcount=0;
        // sort(aux.begin(),aux.end());
        for(int j=1;j<2001;j++)
        {
            if(aux[j]==0)
            {
               missingcount++;
            }
           if(missingcount==k)
           {
              return j;
           }
        }
        return -1;


    }
};