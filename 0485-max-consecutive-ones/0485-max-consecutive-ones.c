int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max=0, c=0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]==1) c++;
        else c=0;
        if(c>max) max = c;
    }
    return max;
}