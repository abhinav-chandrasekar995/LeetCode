class Solution {
public:
    int findGCD(vector<int>& nums) {
        int largest=-1e9;
        int smallest=1e9;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<smallest) smallest=nums[i];
            if(nums[i]>largest) largest=nums[i];
        }
        return gcd(largest,smallest);
    }
    int gcd(int a,int b)
    {
        if(b==0) return a;
        else return gcd(b,a%b);
    }
};