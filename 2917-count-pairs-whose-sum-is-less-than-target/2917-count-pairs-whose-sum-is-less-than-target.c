int countPairs(int* nums, int numsSize, int target) {
    int c=0;
    for(int i=0; i<numsSize; i++)
    {
        for(int j=0; j<numsSize; j++)
        {
            if(i<j && nums[i]+ nums[j]<target) c++;
        }
    }
    return c;
}