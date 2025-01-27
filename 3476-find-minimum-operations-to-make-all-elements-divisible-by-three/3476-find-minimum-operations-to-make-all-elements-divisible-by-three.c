int minimumOperations(int* nums, int numsSize) {
    int c=0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]%3==2) c++;
        if(nums[i]%3==1) c++;
    }
    return c;
}