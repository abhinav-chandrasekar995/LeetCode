class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int costamt=0;
        int count=0;
        for(int i=cost.size()-1;i>=0;i--)
        {
            if(count>0&&(count+1)%3==0)
            {
            count++;
            continue;
            }
            else
            {
            costamt+=cost[i];
            count++;
            }
        }
        return costamt;
    }
};