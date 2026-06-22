class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
                int subsum=0;
                int count=0;
                int divisorbound=sqrt(nums[i]);
                for(int j=1;j<=divisorbound;j++)
                {
                    if(j*j==nums[i])
                    {
                        count+=1;
                        subsum+=j;
                    }
                    if(nums[i]%j==0) 
                    {
                        count+=2;
                        subsum+=j;
                        subsum+=(nums[i]/j);
                    }
                }
                if(count==4)
                {
                    sum+=subsum;
                }
        }
        return sum;
    }
};