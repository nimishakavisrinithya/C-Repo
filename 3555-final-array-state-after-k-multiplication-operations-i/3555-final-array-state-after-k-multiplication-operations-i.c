/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    while(k--)
    {
        int min= nums[0];
        for(int i=0; i<numsSize; i++)
        {
           if(min>nums[i]) min= nums[i];
        }
        for(int i=0; i<numsSize; i++)
        {
            if(min==nums[i]) {
                nums[i]*=multiplier;
                break;
            }
        }
    }
    *returnSize= numsSize;
    return nums;
}