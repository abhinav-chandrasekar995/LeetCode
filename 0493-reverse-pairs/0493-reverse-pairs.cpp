class Solution {
public:
    int reversePairs(vector<int>& nums) {
    return mergeSort(0,nums.size()-1,nums);
    }
    int mergeSort(int low,int high,vector<int>& nums)
    {
        int ans=0;
        if(low<high)
        {
            int mid=low+(high-low)/2;
            ans+=mergeSort(low,mid,nums);
            ans+=mergeSort(mid+1,high,nums);
            ans+=merge(low,mid,high,nums);
        }
        return ans;
    }
    int merge(int low,int mid,int high,vector<int>& nums)
    {
        int count=0;
        vector<int>temp;
        int i=low;int j=mid+1;
        int a=i,b=j;
        while(a<=mid)
        {
           while(b<=high && nums[a]>2LL*nums[b])
           {
            b++;
           }
           count+=(b-j);
           a++;
        }
        while(i<=mid && j<=high)
        {
            if(nums[i]<=nums[j])
            {
                temp.emplace_back(nums[i]);
                i++;
            }
            else
            {
                temp.emplace_back(nums[j]);
                j++;
            }
        }
        while(i<=mid)
        {
            temp.emplace_back(nums[i]);
            i++;
        }
        while(j<=high)
        {
            temp.emplace_back(nums[j]);
            j++;
        }
        for(int i=low;i<=high;i++)
        {
            nums[i]=temp[i-low];
        }
        return count;
    }
};