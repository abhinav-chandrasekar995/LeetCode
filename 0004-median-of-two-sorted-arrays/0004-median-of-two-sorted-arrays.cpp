class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>aux;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                aux.emplace_back(nums1[i]);
                i++;
            }
            else{
                aux.emplace_back(nums2[j]);
                j++;
            }
        }
        while(i<n1){
             aux.emplace_back(nums1[i]);
             i++;
        }
        while(j<n2){
             aux.emplace_back(nums2[j]);
             j++;
        }
        double ans=0.0;
        int auxsize=aux.size();
        if(auxsize%2==1) ans=aux[auxsize/2];
        else ans=(aux[auxsize/2]+aux[auxsize/2-1])/2.0;
        return ans;
    }
};