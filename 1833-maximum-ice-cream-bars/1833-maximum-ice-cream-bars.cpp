class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxbound=0;
        for(int i=0;i<costs.size();i++)
        {
            maxbound=max(maxbound,costs[i]);
        }
        vector<int>count(maxbound+1,0);
        for(int i=0;i<costs.size();i++)
        {
            count[costs[i]]++;
        }
        long long ans=0;
        for(int i=0;i<count.size();i++)
        {
            long long total = 1LL*count[i]*i;
            if(count[i]==0)
            {
                continue;
            }
            else if (total<=coins)
            {
                ans+=count[i];
                coins-=total;
            }
            else
            {
                ans+=coins/i;
                break;
            } 
        }
        return ans;
    }
};