int minOperations(int* nums, int numsSize) {
    int c=0;
    int sum=0;
    for(int i=0; i<numsSize-2; i++){
        if(nums[i]==0){
            nums[i]=1;
            c++;
            if(nums[i+1]==1) nums[i+1]= 0;
            else nums[i+1] = 1;
            if(nums[i+2]==0) nums[i+2]= 1;
            else nums[i+2] = 0;
        }
    }
    for(int i=0; i<numsSize; i++) sum+=nums[i];
    if(sum!= numsSize){ 
        printf("%d", sum);
        return -1;}
    return c;
}