class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n=players.size();
        int n1=trainers.size();
        int i=0;
        int j=0;
        int count=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end(),greater<int>());
        if(n1==1 && players[i]<=trainers[j])
        {
            count=1;
            return count;
        }
        if(n1==2 && n==2)
        {
            count=2;
            return count;
        }
         i=0;
         j=n1-1;
        while(i<n && j>=0)
        {
        if(players[i]<=trainers[j])
        {
             count++;
             i++;
             j--;
        }
        else
        {
            j--;
        }
        }
        return count;

        
    }
};
        