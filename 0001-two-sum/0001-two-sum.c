/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int at(int nums[], int numsSize, int n, int target, int j){
    for(int i=0; i<numsSize; i++){
        if(n+nums[i]==target && i!=j) return i;
    }
    return -1;
 }
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *res = (int*)malloc(numsSize*sizeof(int));
    for(int i=0; i<numsSize; i++){
        int k = at(nums, numsSize, nums[i],target, i);
       if(k>-1){
        res[0] = i;
        res[1]= k;
        break;
       }
    }
    *returnSize = 2;
    return res;
}