
bool canJump(int* nums, int numsSize) {
    int position=numsSize-1;//[3,0,1,1,4]
    int mover=numsSize-2;
    while(mover>=0)
    {
       if(nums[mover]>=position-mover)
       {
       position=mover;
       }
       mover--;
    }
    return position==0;
}