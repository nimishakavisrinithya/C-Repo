int numIdenticalPairs(int* nums, int numsSize) {
    int c=0;
    for(int i=0; i<numsSize; i++)
    {
    for(int j=0; j<numsSize; j++)
    {
        if(nums[i]==nums[j] && i<j) c++;
    }
    }
    return c;
}