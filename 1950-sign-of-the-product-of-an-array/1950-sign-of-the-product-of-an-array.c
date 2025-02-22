int arraySign(int* nums, int numsSize) {
    signed int pro = 0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]==0) return 0;
        if(nums[i]<0) pro++;
    }
    if(pro%2==0) return 1;
    return -1;
}