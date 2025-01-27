/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int* res = (int*)malloc(2*sizeof(int));
   int  frq[101] = {0};
    int c=0;
    *returnSize = 2;
    for(int i=0; i<numsSize; i++)
    {
        frq[nums[i]]++;
        if(frq[nums[i]]==2){ 
            res[c]= nums[i];
            c++;
        }
        if(c==2) return res;
    }
    return res;
}