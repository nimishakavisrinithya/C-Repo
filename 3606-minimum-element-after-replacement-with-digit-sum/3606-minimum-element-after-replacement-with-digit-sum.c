int add(int n){
    if(n==0) return 0;
    return n%10+add(n/10);
}
int minElement(int* nums, int numsSize) {
    int min=0;
    int a;
    min = add(nums[0]);
    for(int i=0; i<numsSize; i++){
        a = add(nums[i]);
    if(min>a) min = a;
    }
    return min;
}