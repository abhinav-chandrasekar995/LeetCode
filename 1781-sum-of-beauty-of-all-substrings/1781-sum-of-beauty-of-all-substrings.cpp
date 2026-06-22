class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int>umpp;
            {
                for(int j=i;j<n;j++)
                {
                    umpp[s[j]]++;
                    int mincount=1e9;
                    int maxcount=-1e9;

                    for(auto it:umpp)
                    {
                        mincount=min(mincount,it.second);
                        maxcount=max(maxcount,it.second);
                    }
                    sum+=(maxcount-mincount);
                }
            }
        }
        return sum;
    }
};