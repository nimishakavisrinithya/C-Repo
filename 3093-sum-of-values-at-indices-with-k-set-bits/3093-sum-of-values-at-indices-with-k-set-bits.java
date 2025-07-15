class Solution {
    static int fun(int n, int k){
        String s = Integer.toBinaryString(n);
        int c=0;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)=='1') c++;
        }
        if(c==k) return 1;
        return 0;
    }
    public int sumIndicesWithKSetBits(List<Integer> nums, int k) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(fun(i, k)==1) sum+=nums.get(i);
        }
        return sum;
    }
}