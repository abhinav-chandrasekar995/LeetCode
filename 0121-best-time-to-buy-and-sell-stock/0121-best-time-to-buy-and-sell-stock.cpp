class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=1e9;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            minimum=min(minimum,prices[i]);
            profit=max(profit,prices[i]-minimum);
        }
        return profit;
    }
};