class Solution {
    static int left(int[] a, int i){
        int sum=0;
        for(int j=0; j<=i; j++) sum+=a[j];
        return sum;
    }
    public int[] runningSum(int[] nums) {
        int[] res = new int[nums.length];
        for(int i=0; i<nums.length; i++){
            res[i] = left(nums, i);
        }
        return res;
    }
}