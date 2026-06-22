class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>result;
        result.emplace_back(-1);
        int n=arr.size();
        int max=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            result.emplace_back(max);
            if(arr[i]>max) max=arr[i];
            else continue;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};