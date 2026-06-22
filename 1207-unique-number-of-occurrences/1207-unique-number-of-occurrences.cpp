class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>umpp;
        for(int i=0;i<arr.size();i++)
        {
            umpp[arr[i]]++;
        }
        vector<int>result;
        for(auto it:umpp)
        {
            result.emplace_back(it.second);
        }
        sort(result.begin(),result.end());
        bool flag=true;
        for(int i=1;i<result.size();i++)
        {
            if(result[i]==result[i-1])
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};