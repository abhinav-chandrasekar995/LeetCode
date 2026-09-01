class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>nums1=nums;
        nums1.insert(nums1.end(),nums.begin(),nums.end());
        stack<int>st;
        vector<int>ans;

        int n=nums1.size();
        for(int i=n-1;i>=0;i--) {
            if(i>(n-1)/2) {
                while(!(st.empty()) && nums1[i]>st.top()) st.pop();
                st.push(nums1[i]);
            }
            else {
                while(!(st.empty()) && nums1[i]>=st.top()) st.pop();
                if(st.empty()) ans.emplace_back(-1);
                else ans.emplace_back(st.top());
                st.push(nums1[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};