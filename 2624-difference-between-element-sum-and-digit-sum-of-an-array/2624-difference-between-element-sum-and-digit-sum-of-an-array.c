#include<math.h>
int digit_sum(int n)
{   int c=0;
    while(n>0)
    {
        int r=n%10;
        c+=r;
        n=n/10;
    }
    return c;
}

int differenceOfSum(int* nums, int numsSize) {
  int sum=0, sum1=0;
    for(int i=0; i<numsSize; i++)
    {
        sum+=nums[i];
       sum1+= digit_sum(nums[i]);
    }
    return abs(sum-sum1);
}