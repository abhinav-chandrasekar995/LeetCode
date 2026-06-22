int minimumOperations(int* nums, int numsSize) {
    int number=0;
    for(int i=0;i<numsSize;i++)
    {
        int element=nums[i];
        if(element%3==0)
        continue;
        else
        number++;
    }
    return number;
}
