class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int left=0,right=colors.size()-1;
        int first=0;
        for(int i=0;i<colors.size();i++)
        {
            if(colors[left]!=colors[right])
            {
                first=right-left;
                break;
            }
            else
            right--;
        }
        int left1=0,right1=colors.size()-1;
        int second=0;
        for(int i=0;i<colors.size();i++)
        {
            if(colors[left1]!=colors[right1])
            {
                second=right1-left1;
                break;
            }
            else
            left1++;
        }
        return max(first,second);
    }
};