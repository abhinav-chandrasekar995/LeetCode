class Solution {
public:
    int maxProduct(int n) {
        vector<int>digits;
        while(n>0)
        {
            int rem=n%10;
            digits.emplace_back(rem);
            n/=10;
        }
        int ans=0;
        for(int i=0;i<digits.size();i++)
        {
            for(int j=i+1;j<digits.size();j++)
            {
                int prod=digits[i]*digits[j];
                ans=max(ans,prod);
            }
        }
        return ans;
    }
};