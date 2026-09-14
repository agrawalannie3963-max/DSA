class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
    //     int len=num_people;
    //    vector<int>ans(len,0);

    //    int i=0;
    // //    for(int i=i%num_people;i<num_p;i++)
  
    // while(candies!=0)
    //    {
    //     if(candies>=i+1)
    //     {
    //     ans[i%len]=ans[i%len]+i+1;
    //     candies=candies-(i+1);
    //     i++;
    //     }
    //    else
    //    {
    //         ans[i%len]=ans[i%len]+candies;
    //         candies=0;
    //    }
    //    }
     
    //     return ans;
    


int n=num_people;
vector<int>ans(num_people,0);
int i=0;
while(candies!=0)
{
    if(candies>=i+1)
    {
    ans[i%n]=ans[i%n]+i+1;
    candies=candies-(i+1);
    i++;
    }
    else
    {
        ans[i%n]=ans[i%n]+candies;
        candies=0;
        i++;
    }
}
return ans;
}
};

















