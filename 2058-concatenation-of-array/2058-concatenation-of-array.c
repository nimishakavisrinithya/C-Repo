/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize*2;
    int* result = (int*)malloc((*returnSize)*sizeof(int));
    if(!result)
    {
        return NULL;
    }
    int t=2;
    int j=0;
    while(t--)
    {
       for(int i=0; i<numsSize; i++)
       {
        result[j]= nums[i];
        j++;
       }
    }
    return result;
}