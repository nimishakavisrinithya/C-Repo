
int binary(int n, int k)
{
	int r=0, c=0;
	int a[32] ={0};
	int b[32] = {0};
	while(n>=1)
	{
		if(n%2==0){
			a[r]= 0;
		}
		else a[r]= 1;
		r++;
		n=n/2;
	}
	for(int i=r-1; i>=0; i--)
	{
		c+=a[i];
	}
    //printf("%d ", c);
	if(c==k) return 1;
	return 0;
	
}
int sumIndicesWithKSetBits(int* nums, int numsSize, int k) {
    int c=0;
    for(int i=0; i<numsSize; i++)
    {
       if(binary(i, k)) c+=nums[i];
    }
    return c;
}