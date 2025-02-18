int count(int n){
    if(n==0) return 0;
    return 1+count(n/10);
}
int findNumbers(int* nums, int numsSize) {
    int c=0;
    for(int i=0; i<numsSize; i++){
        if(count(nums[i])%2==0) c++;
    }
    return c;
}