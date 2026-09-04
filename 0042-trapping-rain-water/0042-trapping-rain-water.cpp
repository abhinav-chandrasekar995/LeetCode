class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();;
        int left=0,right=n-1;
        int rightmax=height[right];
        int leftmax=height[left];
        int water=0;
        while(left<=right) {
            if(leftmax<rightmax) {
                if(height[left]>leftmax) leftmax=height[left];
                else {
                    if(leftmax-height[left]>0) water+=leftmax-height[left];
                }
                left++;
            }
            else {
                if(height[right]>rightmax) rightmax=height[right];
                else{
                    if(rightmax-height[right]>0) water+=rightmax-height[right];
                }
                right--;
            }
        }
        return water;
    }
};