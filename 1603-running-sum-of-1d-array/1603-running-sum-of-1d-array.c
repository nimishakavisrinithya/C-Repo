/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int left(int a[], int n, int x)
 {
    int c=0;
    for(int i=0; i<=x; i++){
        c+=a[i];
    }
    return c;
 }
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *res = (int*)malloc(numsSize*sizeof(int));
    for(int i=0; i<numsSize; i++)
    {
        res[i] = left(nums, numsSize, i);
    }
    *returnSize = numsSize;
    return res;
}