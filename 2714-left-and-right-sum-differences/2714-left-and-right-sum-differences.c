/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int left(int nums[], int n, int k)
 {
    int l=0;
    for(int i=0; i<k; i++){
    l+=nums[i];
    }
    return l;
 }
 int right(int nums[], int n, int k)
 {
    int l=0;
    for(int i=n-1; i>k; i--){
    l+=nums[i];
    }
    return l;
 }
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *res= (int*)malloc(numsSize*sizeof(int));
    for(int i=0; i<numsSize; i++)
    {
        res[i]= abs(left(nums, numsSize, i)-right(nums, numsSize, i));
    }
    *returnSize= numsSize;
    return res;
}