/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *res = (int*) malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    for(int i=0; i<numsSize; i++)
    {
        int c=0;
        for(int j=0; j<numsSize; j++)
        {
            if(j!=i && nums[j]<nums[i]) c++;
        }
        res[i] = c;
    }
    return res;
}