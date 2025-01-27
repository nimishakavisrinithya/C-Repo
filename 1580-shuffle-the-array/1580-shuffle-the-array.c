

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* res= (int*)malloc((2*n)*sizeof(int));
    *returnSize= 2*n;
    int j=0;
for(int i=0; i<n; i++)
{
    res[j]= nums[i];
    j++;
    res[j] =nums[i+n];
    j++;
}
return res;
}