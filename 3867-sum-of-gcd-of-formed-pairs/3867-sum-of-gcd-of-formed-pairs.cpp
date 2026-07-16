class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefixGcd;
        int mx=1;
        for(int i=0;i<nums.size();i++)
        {
            mx=max(mx,nums[i]);
            prefixGcd.emplace_back(gcd(mx,nums[i]));
        }
        long long ans=0;
        sort(prefixGcd.begin(),prefixGcd.end());
        int a=0,b=prefixGcd.size()-1;
        while(a<b)
        {
            ans+=gcd(prefixGcd[a],prefixGcd[b]);
            a++;
            b--;
        }
        return ans;
    }
    int gcd(int a,int b)
    {
        if (b==0) return a;
        return gcd(b,a%b);
    }
};