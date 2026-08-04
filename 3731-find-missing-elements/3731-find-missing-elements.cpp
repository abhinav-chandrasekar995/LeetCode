class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>umpp;
        int low=1e9;
        int high=-1e9;
        for (int num: nums){
            low=min(low,num);
            high=max(high,num);
            umpp[num]++;
        }
        for(int i=low;i<=high;i++){
            if(umpp.find(i)==umpp.end()) //using a find function in the umpp using if(umpp.find()==umpp.end())
            {
                ans.emplace_back(i);
            }
        }
        return ans;
    }
};