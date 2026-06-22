class Solution {
public:
    int reverseBits(int n) {
        long long result=0;
        int arr[32]={0};
        int idx=31;
        while(n>0)
        {
            arr[idx--]=n%2;
            n/=2;
        }
        for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
        {
            result=result+arr[i]*pow(2,i);
        }
        return result;
    }
};