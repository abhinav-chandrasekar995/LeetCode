class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for( int i = 0 ; i < nums.size() ; i++)
        {
            nums[i]=pow(nums[i],2);
        }
        qS(nums,0,nums.size()-1);
        return nums;
    }
    void qS(vector <int> &a, int low , int high)
    {
        if(low<high)
        {
        int partition=f(a,low,high);
        {
            qS(a,low,partition-1);
            qS(a,partition+1,high);
        }
        }
    }
    int f(vector <int> &arr, int low, int high)
    {
        int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j)
        {
            while(arr[i]<=pivot && i<=high-1)i++;
            while(arr[j]>=pivot && j>=low+1)j--;
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
};