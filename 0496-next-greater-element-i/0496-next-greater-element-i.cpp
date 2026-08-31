class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>umpp;
        stack<int>st;

        int n2=nums2.size()-1;
        while(n2>=0) {
            while(!(st.empty()) && nums2[n2]>st.top()) st.pop();
            if(st.empty()) umpp[nums2[n2]]=-1;
            else umpp[nums2[n2]]=st.top();
            st.push(nums2[n2]);
            n2--;
        }

        vector<int>ans;
        for(int num: nums1) ans.emplace_back(umpp[num]);
        return ans;
    }
};