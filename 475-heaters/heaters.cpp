class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
//         int n=houses.size();
//         int n1=heaters.size();
//         long long int radius=0;
//         long long int radiusmin=INT_MAX;
//         vector<int>aux;
//         for(long long int i=0;i<n;i++)
//         {
//             radius=0;
//             radiusmin=INT_MAX;
//             for(long long int j=0;j<n1;j++)
//             {
//             radius=abs(heaters[j]-houses[i]);
//             if(radius<radiusmin) 
//             {
//                 radiusmin=radius;
//             }
//             }
//             aux.push_back(radiusmin);
            
//         }
//         long long int maxdistance=0;
//         for(long long int k=0;k<n;k++)
//         {
//            if(aux[k]>maxdistance)
//            {
//               maxdistance=aux[k];
//            }
//         }
//         return maxdistance;
//     }
// };
sort(houses.begin(),houses.end());
sort(heaters.begin(),heaters.end());
int n=houses.size();
int n1=heaters.size();
int ans=0;
for(int i=0;i<n;i++)
{
int top=0;
int bottom=n1-1;
int currmin=INT_MAX;
while(top<=bottom)
{
    int mid=(top+bottom)/2;
    int dis=abs(houses[i]-heaters[mid]);
    if(dis<currmin)
    {
        currmin=dis;
    }
    if(heaters[mid]<houses[i])
    {
        top=mid+1;
    }
    else
    {
        bottom=mid-1;
    }
}
    if(currmin>ans)
    {
        ans=currmin;
    }
}

return ans;
}
};

