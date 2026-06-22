class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_map<int,int>one;
        unordered_map<int,int>two;
        for ( int i = 0; i < nums1.size() ; i++)
        {
            one[nums1[i]]++;
        }
        for ( int i = 0; i < nums2.size() ; i++)
        {
            int element=nums2[i];
            for(auto it : one)
            {
                if (it.first==element)
                {
                    two[element]=it.second+1;
                }
            }
        }
        for ( auto it : two)
        {
            result.emplace_back(it.first);
        }
        return result;
    }
};