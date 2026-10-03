class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size();
        int n1=arr2.size();
        int i=0;
        int j=0;
        int count=0;
        while(i<n)
        {
            j=0;
          while(j<n1)
            {
           if(abs(arr1[i]-(arr2[j]))<=d)
               {
                  i++;
                  j=0;
                  break;
               }
               else
               {
                j++;
               }

            }
            if(j!=0)
            {
                count++;
                i++;
            }
        }
        return count;
    }
};