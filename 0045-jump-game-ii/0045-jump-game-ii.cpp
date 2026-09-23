class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0;
        int ans = 0;
        while (right < n-1) { //if this becomes false, (right >= n-1) this means we reached the end
            int farthest = 0;
            for (int i = left; i <= right; i++) {
                farthest = max (farthest, nums[i] + i); //nums[i] is the max number of steps and added to i since it is the offset in the array from where if we jump we see where we can potentially reach
            }
            ans ++; //counting the number of jumps for the window to window jump
            left = right + 1; //setting the next range of wuindow since left takes the least which impliest right next to the end of the previous window where right was seated
            right = farthest; //this goes to the furthest index that is reachable whilst traversing in the window
        }
        return ans;
    }
};